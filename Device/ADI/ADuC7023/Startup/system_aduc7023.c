/*
 * Copyright (C) 2021 Sergey Koshkin <koshkin.sergey@gmail.com>
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

/*******************************************************************************
 *  includes
 ******************************************************************************/

#include <string.h>
#include "asm/aduc7023.h"
#include "Kernel/irq.h"

#define RAM_INTVEC_SIZE             64U
#define RAM_INTVEC_ATTR             __attribute__((section(".bss.ram_intvec")))
#define RAM_INTVEC

#if defined (RAM_INTVEC)

static uint8_t ram_intvec[RAM_INTVEC_SIZE] RAM_INTVEC_ATTR = { 0U };

#endif

uint32_t SystemCoreClock;           /*!< System Clock Frequency (Core Clock)  */

/*******************************************************************************
 *  function implementations (scope: module-exported)
 ******************************************************************************/

/**
 * @brief       Update SystemCoreClock variable.
 */
void SystemCoreClockUpdate(void)
{
  SystemCoreClock = 41780000U;
}

/**
 * @brief       Initialize the System.
 */
void SystemInit(void)
{
  POW->KEY1 = POW_KEY1_VALUE;
  POW->CON0 = 0x00;
  POW->KEY2 = POW_KEY2_VALUE;

#if defined (RAM_INTVEC)

  memcpy((void *)ram_intvec, (void *)FLASH_BASE, RAM_INTVEC_SIZE);
  SYS_REMAP = SYS_REMAP_SRAM;

#endif

  IRQ_Initialize();
}
