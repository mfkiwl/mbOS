/*
 * Copyright (C) 2017-2022 Sergey Koshkin <koshkin.sergey@gmail.com>
 * All rights reserved
 *
 * Licensed under the Apache License, Version 2.0 (the License); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _KERNEL_LIB_H_
#define _KERNEL_LIB_H_

/*******************************************************************************
 *  includes
 ******************************************************************************/

#include "arch.h"
#include "Kernel/kernel.h"

/*******************************************************************************
 *  defines and macros
 ******************************************************************************/

/* Kernel Information */
#define osVersionAPI         020010003        ///< API version (2.1.3)
#define osVersionKernel      010030000        ///< Kernel version (1.3.0)
#define osKernelId           "Kernel V1.3.0"  ///< Kernel identification string

/* Object Identifier definitions */
#define ID_INVALID                  (uint8_t)0x00
#define ID_THREAD                   (uint8_t)0x47
#define ID_SEMAPHORE                (uint8_t)0x6F
#define ID_EVENT_FLAGS              (uint8_t)0x5E
#define ID_MEMORYPOOL               (uint8_t)0x26
#define ID_MUTEX                    (uint8_t)0x17
#define ID_TIMER                    (uint8_t)0x7A
#define ID_MESSAGE_QUEUE            (uint8_t)0x1C
#define ID_MESSAGE                  (uint8_t)0x1D
#define ID_DATA_QUEUE               (uint8_t)0x1E

/* Object Flags definitions */
#define FLAGS_POST_PROC             (uint8_t)(1U << 0U)
#define FLAGS_TIMER_PROC            (uint8_t)(1U << 1U)

/* Thread State definitions */
#define ThreadStateMask             (0x0FU)

#define ThreadInactive              ((uint8_t)osThreadInactive)
#define ThreadReady                 ((uint8_t)osThreadReady)
#define ThreadRunning               ((uint8_t)osThreadRunning)
#define ThreadBlocked               ((uint8_t)osThreadBlocked)
#define ThreadTerminated            ((uint8_t)osThreadTerminated)

#define ThreadWaitingThreadFlags    ((uint8_t)(ThreadBlocked | 0x10U))
#define ThreadWaitingEventFlags     ((uint8_t)(ThreadBlocked | 0x20U))
#define ThreadWaitingMutex          ((uint8_t)(ThreadBlocked | 0x30U))
#define ThreadWaitingSemaphore      ((uint8_t)(ThreadBlocked | 0x40U))
#define ThreadWaitingMemoryPool     ((uint8_t)(ThreadBlocked | 0x50U))
#define ThreadWaitingQueueGet       ((uint8_t)(ThreadBlocked | 0x60U))
#define ThreadWaitingQueuePut       ((uint8_t)(ThreadBlocked | 0x70U))
#define ThreadWaitingDelay          ((uint8_t)(ThreadBlocked | 0x80U))

#define container_of(ptr, type, member) ((type *)(void *)((uint8_t *)(ptr) - offsetof(type, member)))

#define GetThreadByQueue(que)       container_of(que, osThread_t, thread_que)
#define GetThreadByDelayQueue(que)  container_of(que, osThread_t, delay_que)
#define GetThreadByObject(obj)      container_of(obj, osThread_t, id)
#define GetMutexByQueque(que)       container_of(que, osMutex_t, mutex_que)
#define GetTimerByQueue(que)        container_of(que, osTimer_t, timer_que)
#define GetMessageByQueue(que)      container_of(que, osMessage_t, msg_que)
#define GetObjectByQueue(que)       container_of(que, osObject_t, post_queue)

#define osThreadWait                (-16)

/*******************************************************************************
 *  typedefs and structures
 ******************************************************************************/

/* Kernel Runtime Information structure */
typedef struct KernelInfo_s {
  struct {
    struct {
      osThread_t                         *curr;   /// Task that is running now
      osThread_t                         *next;   /// Task to be run after switch context
    } run;
    osThreadId_t                          idle;
    osThreadId_t                         timer;
  } thread;
  struct {
    osKernelState_t                      state;   ///< State
    uint32_t                              tick;
  } kernel;
  uint32_t                    ready_to_run_bmp;
  queue_t             ready_list[NUM_PRIORITY];   ///< all ready to run(RUNNABLE) tasks
  queue_t                          timer_queue;
  queue_t                          delay_queue;
  queue_t                           post_queue;   ///< ISR Post Processing queue
} KernelInfo_t;

typedef enum {
  DISPATCH_NO  = 0,
  DISPATCH_YES = 1,
} dispatch_t;

/* Generic Object Control Block */
typedef struct osObject_s {
  uint8_t                          id;  ///< Object Identifier
  uint8_t                       state;  ///< Object State
  uint8_t                       flags;  ///< Object Flags
  uint8_t                    reserved;
  queue_t                  post_queue;  ///< Post Processing queue
} osObject_t;

/*******************************************************************************
 *  exported variables
 ******************************************************************************/

extern KernelInfo_t osInfo;             ///< Kernel Runtime Information

/*******************************************************************************
 *  exported function prototypes
 ******************************************************************************/

/* Thread */

/**
 * @brief       Thread startup (Idle and Timer Thread).
 * @return      true - success, false - failure.
 */
bool krnThreadStartup(void);

/**
 * @brief       Exit Thread wait state.
 * @param[out]  thread    thread object.
 * @param[in]   ret_val   return value.
 */
void krnThreadWaitExit(osThread_t *thread, uint32_t ret_val, dispatch_t dispatch);

/**
 * @brief       Enter Thread wait state.
 * @param[in]   state     New thread state.
 * @param[out]  wait_que  Pointer to wait queue.
 * @param[in]   timeout   Timeout
 */
osStatus_t krnThreadWaitEnter(uint8_t state, queue_t *wait_que, uint32_t timeout);

/**
 * @brief
 * @param wait_que
 */
void krnThreadWaitDelete(queue_t *que);

/**
 * @brief       Change priority of a thread.
 * @param[in]   thread    thread object.
 * @param[in]   priority  new priority value for the thread.
 */
void krnThreadSetPriority(osThread_t *thread, int8_t priority);

/**
 * @brief       Dispatch specified Thread or Ready Thread with Highest Priority.
 * @param[in]   thread  thread object or NULL.
 */
void SchedDispatch(osThread_t *thread);

/**
 * @brief       The function passes control to the next thread with the same
 *              priority that is in the READY state.
 * @param[in]   thread  Thread object
 */
void SchedYield(osThread_t *thread);

/**
 * @brief       Adds thread to the end of ready queue for current priority
 * @param[in]   thread  Thread object
 */
void SchedThreadReadyAdd(osThread_t *thread);

/**
 * @brief       Deletes thread from the ready queue for current priority
 * @param[in]   thread        Thread object
 * @param[in]   thread_state  New thread state
 */
void SchedThreadReadyDel(osThread_t *thread, uint8_t thread_state);

__STATIC_FORCEINLINE
osThread_t *ThreadGetRunning(void)
{
  return (osInfo.thread.run.curr);
}


/* Queue */

__STATIC_FORCEINLINE
void QueueReset(queue_t *que)
{
  que->prev = que->next = que;
}

__STATIC_FORCEINLINE
bool isQueueEmpty(queue_t *que)
{
  return ((que->next == que) ? true : false);
}

/**
 * @fn          void QueueAppend(queue_t *que, queue_t *entry)
 * @brief       Appends an entry at the tail of the queue.
 * @param[out]  que     Pointer to the queue
 * @param[out]  entry   Pointer to an entry
 */
__STATIC_FORCEINLINE
void QueueAppend(queue_t *que, queue_t *entry)
{
  entry->next = que;
  entry->prev = que->prev;
  entry->prev->next = entry;
  que->prev = entry;
}

/**
 * @fn          queue_t* QueueExtract(queue_t *que)
 * @brief       Removes and return an entry at the head of the queue.
 * @param[out]  que   Pointer to the queue
 * @return      Returns a pointer to an entry at the head of the queue
 */
__STATIC_FORCEINLINE
queue_t* QueueExtract(queue_t *que)
{
  queue_t *entry = que->next;

  entry->next->prev = que;
  que->next = entry->next;
  QueueReset(entry);

  return (entry);
}

/**
 * @fn          void QueueRemoveEntry(queue_t *entry)
 * @brief       Removes an entry from the queue.
 * @param[out]  entry   Pointer to an entry of the queue
 */
__STATIC_FORCEINLINE
void QueueRemoveEntry(queue_t *entry)
{
  if (!isQueueEmpty(entry)) {
    entry->prev->next = entry->next;
    entry->next->prev = entry->prev;
    QueueReset(entry);
  }
}


/* Timer */

void krnTimerInsert(osTimer_t *timer, uint32_t time);
void krnTimerRemove(osTimer_t *timer);
void krnTimerThread(void *argument);

/**
 * @brief       Release Mutexes when owner Task terminates.
 * @param[in]   que   Queue of mutexes
 */
void krnMutexOwnerRelease(queue_t *que);

/**
 * @brief       Initialize Memory Pool.
 * @param[in]   block_count   maximum number of memory blocks in memory pool.
 * @param[in]   block_size    size of a memory block in bytes.
 * @param[in]   block_mem     pointer to memory for block storage.
 * @param[in]   mp_info       memory pool info.
 */
void krnMemoryPoolInit(uint32_t block_count, uint32_t block_size, void *block_mem, osMemoryPoolInfo_t *mp_info);

/**
 * @brief       Reset Memory Pool.
 * @param[in]   mp_info       memory pool info.
 */
void krnMemoryPoolReset(osMemoryPoolInfo_t *mp_info);

/**
 * @brief       Allocate a memory block from a Memory Pool.
 * @param[in]   mp_info   memory pool info.
 * @return      address of the allocated memory block or NULL in case of no memory is available.
 */
void *krnMemoryPoolAlloc(osMemoryPoolInfo_t *mp_info);

/**
 * @brief       Return an allocated memory block back to a Memory Pool.
 * @param[in]   mp_info   memory pool info.
 * @param[in]   block     address of the allocated memory block to be returned to the memory pool.
 * @return      status code that indicates the execution status of the function.
 */
osStatus_t krnMemoryPoolFree(osMemoryPoolInfo_t *mp_info, void *block);

/*******************************************************************************
 *  Post ISR processing functions
 ******************************************************************************/

/**
 * @brief       Thread Flags post ISR processing.
 * @param[in]   obj  object.
 */
void krnThreadFlagsPostProcess(osObject_t *obj);

/**
 * @brief       Semaphore post ISR processing.
 * @param[in]   sem  semaphore object.
 */
void krnSemaphorePostProcess(osSemaphore_t *sem);

/**
 * @brief       Event Flags post ISR processing.
 * @param[in]   evf  event flags object.
 */
void krnEventFlagsPostProcess(osEventFlags_t *evf);

/**
 * @brief       Message Queue post ISR processing.
 * @param[in]   mq  message queue object.
 */
void krnMessageQueuePostProcess(osMessageQueue_t *mq);

/**
 * @brief       Data Queue post ISR processing.
 * @param[in]   dq  data queue object.
 */
void krnDataQueuePostProcess(osDataQueue_t *dq);

/**
 * @brief       Memory Pool post ISR processing.
 * @param[in]   mp  memory pool object.
 */
void krnMemoryPoolPostProcess(osMemoryPool_t *mp);

/*******************************************************************************
 *  System Library functions
 ******************************************************************************/

extern void osTick_Handler(void);
extern void osPendSV_Handler(void);
extern void krnPostProcess(osObject_t *object);

#endif /* _KERNEL_LIB_H_ */
