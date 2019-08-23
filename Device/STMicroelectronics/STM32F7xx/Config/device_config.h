/*
 * Copyright (C) 2019 Sergey Koshkin <koshkin.sergey@gmail.com>
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
 *
 * Project: Device Configuration for STMicroelectronics STM32F7xx
 */

//-------- <<< Use Configuration Wizard in Context Menu >>> --------------------

#ifndef __DEVICE_CONFIG_H
#define __DEVICE_CONFIG_H

// <h> Clock Configuration
//   <o> High-speed Internal Clock (Hz) <1-999999999>
#define HSI_CLK                         16000000
//   <o> High-speed External Clock (Hz) <1-999999999>
#define HSE_CLK                         8000000
//   <o> Low-speed Internal Clock (Hz) <1-999999999>
#define LSI_CLK                         32000
//   <o> Low-speed External Clock (Hz) <1-999999999>
#define LSE_CLK                         32768
// </h>

/* Interrupt Priority */
#define DEV_I2C_INT_PRIORITY           (1U)
#define DEV_I2S_INT_PRIORITY           (1U)
#define DEV_USART_INT_PRIORITY         (1U)
#define DEV_USART_DMA_INT_PRIORITY     (1U)
#define DEV_SPI_INT_PRIORITY           (1U)
#define DEV_EXTI_INT_PRIORITY          (1U)
#define DEV_DAC_INT_PRIORITY           (1U)

// <e> USART1 (Universal synchronous asynchronous receiver transmitter) [Driver_USART1]
// <i> Configuration settings for Driver_USART1 in component ::CMSIS Driver:USART
#define DEV_USART1                      0

//   <o> USART1_TX Pin <0=>Not Used <1=>PA9 <2=>PB6 <3=>PB14
#define   DEV_USART1_TX_ID              1
#if      (DEV_USART1_TX_ID == 0)
  #define DEV_USART1_TX                 0
#elif    (DEV_USART1_TX_ID == 1)
  #define DEV_USART1_TX                 1
  #define DEV_USART1_TX_PORT            GPIO_PORT_A
  #define DEV_USART1_TX_PIN             GPIO_PIN_9
  #define DEV_USART1_TX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART1_TX_ID == 2)
  #define DEV_USART1_TX                 1
  #define DEV_USART1_TX_PORT            GPIO_PORT_B
  #define DEV_USART1_TX_PIN             GPIO_PIN_6
  #define DEV_USART1_TX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART1_TX_ID == 3)
  #define DEV_USART1_TX                 1
  #define DEV_USART1_TX_PORT            GPIO_PORT_B
  #define DEV_USART1_TX_PIN             GPIO_PIN_14
  #define DEV_USART1_TX_FUNC            GPIO_PIN_FUNC_4
#else
  #error "Invalid USART1_TX Pin Configuration!"
#endif

//   <o> USART1_RX Pin <0=>Not Used <1=>PA10 <2=>PB7 <3=>PB15
#define   DEV_USART1_RX_ID              1
#if      (DEV_USART1_RX_ID == 0)
  #define DEV_USART1_RX                 0
#elif    (DEV_USART1_RX_ID == 1)
  #define DEV_USART1_RX                 1
  #define DEV_USART1_RX_PORT            GPIO_PORT_A
  #define DEV_USART1_RX_PIN             GPIO_PIN_10
  #define DEV_USART1_RX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART1_RX_ID == 2)
  #define DEV_USART1_RX                 1
  #define DEV_USART1_RX_PORT            GPIO_PORT_B
  #define DEV_USART1_RX_PIN             GPIO_PIN_7
  #define DEV_USART1_RX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART1_RX_ID == 3)
  #define DEV_USART1_RX                 1
  #define DEV_USART1_RX_PORT            GPIO_PORT_B
  #define DEV_USART1_RX_PIN             GPIO_PIN_15
  #define DEV_USART1_RX_FUNC            GPIO_PIN_FUNC_4
#else
  #error "Invalid USART1_RX Pin Configuration!"
#endif

//   <o> USART1_CK Pin <0=>Not Used <1=>PA8
#define   DEV_USART1_CK_ID              0
#if      (DEV_USART1_CK_ID == 0)
  #define DEV_USART1_CK                 0
#elif    (DEV_USART1_CK_ID == 1)
  #define DEV_USART1_CK                 1
  #define DEV_USART1_CK_PORT            GPIO_PORT_A
  #define DEV_USART1_CK_PIN             GPIO_PIN_8
  #define DEV_USART1_CK_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART1_CK Pin Configuration!"
#endif

//   <o> USART1_CTS Pin <0=>Not Used <1=>PA11
#define   DEV_USART1_CTS_ID             0
#if      (DEV_USART1_CTS_ID == 0)
  #define DEV_USART1_CTS                0
#elif    (DEV_USART1_CTS_ID == 1)
  #define DEV_USART1_CTS                1
  #define DEV_USART1_CTS_PORT           GPIO_PORT_A
  #define DEV_USART1_CTS_PIN            GPIO_PIN_11
  #define DEV_USART1_CTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid USART1_CTS Pin Configuration!"
#endif

//   <o> USART1_RTS Pin <0=>Not Used <1=>PA12
#define   DEV_USART1_RTS_ID             0
#if      (DEV_USART1_RTS_ID == 0)
  #define DEV_USART1_RTS                0
#elif    (DEV_USART1_RTS_ID == 1)
  #define DEV_USART1_RTS                1
  #define DEV_USART1_RTS_PORT           GPIO_PORT_A
  #define DEV_USART1_RTS_PIN            GPIO_PIN_12
  #define DEV_USART1_RTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid USART1_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <2=>2 <5=>5
//     <i>  Selects DMA Stream (only Stream 2 or 5 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART1_RX_DMA               1
#define DEV_USART1_RX_DMA_NUMBER        2
#define DEV_USART1_RX_DMA_STREAM        2
#define DEV_USART1_RX_DMA_CHANNEL       4
#define DEV_USART1_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 7 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART1_TX_DMA               1
#define DEV_USART1_TX_DMA_NUMBER        2
#define DEV_USART1_TX_DMA_STREAM        7
#define DEV_USART1_TX_DMA_CHANNEL       4
#define DEV_USART1_TX_DMA_PRIORITY      0

// </e> USART1 (Universal synchronous asynchronous receiver transmitter) [Driver_USART1]

// <e> USART2 (Universal synchronous asynchronous receiver transmitter) [Driver_USART2]
// <i> Configuration settings for Driver_USART2 in component ::CMSIS Driver:USART
#define DEV_USART2                      0

//   <o> USART2_TX Pin <0=>Not Used <1=>PA2 <2=>PD5
#define   DEV_USART2_TX_ID              0
#if      (DEV_USART2_TX_ID == 0)
  #define DEV_USART2_TX                 0
#elif    (DEV_USART2_TX_ID == 1)
  #define DEV_USART2_TX                 1
  #define DEV_USART2_TX_PORT            GPIO_PORT_A
  #define DEV_USART2_TX_PIN             GPIO_PIN_2
  #define DEV_USART2_TX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART2_TX_ID == 2)
  #define DEV_USART2_TX                 1
  #define DEV_USART2_TX_PORT            GPIO_PORT_D
  #define DEV_USART2_TX_PIN             GPIO_PIN_5
  #define DEV_USART2_TX_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART2_TX Pin Configuration!"
#endif

//   <o> USART2_RX Pin <0=>Not Used <1=>PA3 <2=>PD6
#define   DEV_USART2_RX_ID              0
#if      (DEV_USART2_RX_ID == 0)
  #define DEV_USART2_RX                 0
#elif    (DEV_USART2_RX_ID == 1)
  #define DEV_USART2_RX                 1
  #define DEV_USART2_RX_PORT            GPIO_PORT_A
  #define DEV_USART2_RX_PIN             GPIO_PIN_3
  #define DEV_USART2_RX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART2_RX_ID == 2)
  #define DEV_USART2_RX                 1
  #define DEV_USART2_RX_PORT            GPIO_PORT_D
  #define DEV_USART2_RX_PIN             GPIO_PIN_6
  #define DEV_USART2_RX_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART2_RX Pin Configuration!"
#endif

//   <o> USART2_CK Pin <0=>Not Used <1=>PA4 <2=>PD7
#define   DEV_USART2_CK_ID              0
#if      (DEV_USART2_CK_ID == 0)
  #define DEV_USART2_CK                 0
#elif    (DEV_USART2_CK_ID == 1)
  #define DEV_USART2_CK                 1
  #define DEV_USART2_CK_PORT            GPIO_PORT_A
  #define DEV_USART2_CK_PIN             GPIO_PIN_4
  #define DEV_USART2_CK_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART2_CK_ID == 2)
  #define DEV_USART2_CK                 1
  #define DEV_USART2_CK_PORT            GPIO_PORT_D
  #define DEV_USART2_CK_PIN             GPIO_PIN_7
  #define DEV_USART2_CK_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART2_CK Pin Configuration!"
#endif

//   <o> USART2_CTS Pin <0=>Not Used <1=>PA0 <2=>PD3
#define   DEV_USART2_CTS_ID             0
#if      (DEV_USART2_CTS_ID == 0)
  #define DEV_USART2_CTS                0
#elif    (DEV_USART2_CTS_ID == 1)
  #define DEV_USART2_CTS                1
  #define DEV_USART2_CTS_PORT           GPIO_PORT_A
  #define DEV_USART2_CTS_PIN            GPIO_PIN_0
  #define DEV_USART2_CTS_FUNC           GPIO_PIN_FUNC_7
#elif    (DEV_USART2_CTS_ID == 2)
  #define DEV_USART2_CTS                1
  #define DEV_USART2_CTS_PORT           GPIO_PORT_D
  #define DEV_USART2_CTS_PIN            GPIO_PIN_3
  #define DEV_USART2_CTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid USART2_CTS Pin Configuration!"
#endif

//   <o> USART2_RTS Pin <0=>Not Used <1=>PA1 <2=>PD4
#define   DEV_USART2_RTS_ID             0
#if      (DEV_USART2_RTS_ID == 0)
  #define DEV_USART2_RTS                0
#elif    (DEV_USART2_RTS_ID == 1)
  #define DEV_USART2_RTS                1
  #define DEV_USART2_RTS_PORT           GPIO_PORT_A
  #define DEV_USART2_RTS_PIN            GPIO_PIN_1
  #define DEV_USART2_RTS_FUNC           GPIO_PIN_FUNC_7
#elif    (DEV_USART2_RTS_ID == 2)
  #define DEV_USART2_RTS                1
  #define DEV_USART2_RTS_PORT           GPIO_PORT_D
  #define DEV_USART2_RTS_PIN            GPIO_PIN_4
  #define DEV_USART2_RTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid USART2_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <5=>5
//     <i>  Selects DMA Stream (only Stream 5 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART2_RX_DMA               0
#define DEV_USART2_RX_DMA_NUMBER        1
#define DEV_USART2_RX_DMA_STREAM        5
#define DEV_USART2_RX_DMA_CHANNEL       4
#define DEV_USART2_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <6=>6
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART2_TX_DMA               0
#define DEV_USART2_TX_DMA_NUMBER        1
#define DEV_USART2_TX_DMA_STREAM        6
#define DEV_USART2_TX_DMA_CHANNEL       4
#define DEV_USART2_TX_DMA_PRIORITY      0

// </e> USART2 (Universal synchronous asynchronous receiver transmitter) [Driver_USART2]

// <e> USART3 (Universal synchronous asynchronous receiver transmitter) [Driver_USART3]
// <i> Configuration settings for Driver_USART3 in component ::CMSIS Driver:USART
#define DEV_USART3                      0

//   <o> USART3_TX Pin <0=>Not Used <1=>PB10 <2=>PC10 <3=>PD8
#define   DEV_USART3_TX_ID              0
#if      (DEV_USART3_TX_ID == 0)
  #define DEV_USART3_TX                 0
#elif    (DEV_USART3_TX_ID == 1)
  #define DEV_USART3_TX                 1
  #define DEV_USART3_TX_PORT            GPIO_PORT_B
  #define DEV_USART3_TX_PIN             GPIO_PIN_10
  #define DEV_USART3_TX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART3_TX_ID == 2)
  #define DEV_USART3_TX                 1
  #define DEV_USART3_TX_PORT            GPIO_PORT_C
  #define DEV_USART3_TX_PIN             GPIO_PIN_10
  #define DEV_USART3_TX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART3_TX_ID == 3)
  #define DEV_USART3_TX                 1
  #define DEV_USART3_TX_PORT            GPIO_PORT_D
  #define DEV_USART3_TX_PIN             GPIO_PIN_8
  #define DEV_USART3_TX_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART3_TX Pin Configuration!"
#endif

//   <o> USART3_RX Pin <0=>Not Used <1=>PB11 <2=>PC11 <3=>PD9
#define   DEV_USART3_RX_ID              0
#if      (DEV_USART3_RX_ID == 0)
  #define DEV_USART3_RX                 0
#elif    (DEV_USART3_RX_ID == 1)
  #define DEV_USART3_RX                 1
  #define DEV_USART3_RX_PORT            GPIO_PORT_B
  #define DEV_USART3_RX_PIN             GPIO_PIN_11
  #define DEV_USART3_RX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART3_RX_ID == 2)
  #define DEV_USART3_RX                 1
  #define DEV_USART3_RX_PORT            GPIO_PORT_C
  #define DEV_USART3_RX_PIN             GPIO_PIN_11
  #define DEV_USART3_RX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART3_RX_ID == 3)
  #define DEV_USART3_RX                 1
  #define DEV_USART3_RX_PORT            GPIO_PORT_D
  #define DEV_USART3_RX_PIN             GPIO_PIN_9
  #define DEV_USART3_RX_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART3_RX Pin Configuration!"
#endif

//   <o> USART3_CK Pin <0=>Not Used <1=>PB12 <2=>PC12 <3=>PD10
#define   DEV_USART3_CK_ID              0
#if      (DEV_USART3_CK_ID == 0)
  #define DEV_USART3_CK                 0
#elif    (DEV_USART3_CK_ID == 1)
  #define DEV_USART3_CK                 1
  #define DEV_USART3_CK_PORT            GPIO_PORT_B
  #define DEV_USART3_CK_PIN             GPIO_PIN_12
  #define DEV_USART3_CK_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART3_CK_ID == 2)
  #define DEV_USART3_CK                 1
  #define DEV_USART3_CK_PORT            GPIO_PORT_C
  #define DEV_USART3_CK_PIN             GPIO_PIN_12
  #define DEV_USART3_CK_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_USART3_CK_ID == 3)
  #define DEV_USART3_CK                 1
  #define DEV_USART3_CK_PORT            GPIO_PORT_D
  #define DEV_USART3_CK_PIN             GPIO_PIN_10
  #define DEV_USART3_CK_FUNC            GPIO_PIN_FUNC_7
#else
  #error "Invalid USART3_CK Pin Configuration!"
#endif

//   <o> USART3_CTS Pin <0=>Not Used <1=>PB13 <2=>PD11
#define   DEV_USART3_CTS_ID             0
#if      (DEV_USART3_CTS_ID == 0)
  #define DEV_USART3_CTS                0
#elif    (DEV_USART3_CTS_ID == 1)
  #define DEV_USART3_CTS                1
  #define DEV_USART3_CTS_PORT           GPIO_PORT_B
  #define DEV_USART3_CTS_PIN            GPIO_PIN_13
  #define DEV_USART3_CTS_FUNC           GPIO_PIN_FUNC_7
#elif    (DEV_USART3_CTS_ID == 2)
  #define DEV_USART3_CTS                1
  #define DEV_USART3_CTS_PORT           GPIO_PORT_D
  #define DEV_USART3_CTS_PIN            GPIO_PIN_11
  #define DEV_USART3_CTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid USART3_CTS Pin Configuration!"
#endif

//   <o> USART3_RTS Pin <0=>Not Used <1=>PB14 <2=>PD12
#define   DEV_USART3_RTS_ID             0
#if      (DEV_USART3_RTS_ID == 0)
  #define DEV_USART3_RTS                0
#elif    (DEV_USART3_RTS_ID == 1)
  #define DEV_USART3_RTS                1
  #define DEV_USART3_RTS_PORT           GPIO_PORT_B
  #define DEV_USART3_RTS_PIN            GPIO_PIN_14
  #define DEV_USART3_RTS_FUNC           GPIO_PIN_FUNC_7
#elif    (DEV_USART3_RTS_ID == 2)
  #define DEV_USART3_RTS                1
  #define DEV_USART3_RTS_PORT           GPIO_PORT_D
  #define DEV_USART3_RTS_PIN            GPIO_PIN_12
  #define DEV_USART3_RTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid USART3_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <1=>1
//     <i>  Selects DMA Stream (only Stream 1 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART3_RX_DMA               0
#define DEV_USART3_RX_DMA_NUMBER        1
#define DEV_USART3_RX_DMA_STREAM        1
#define DEV_USART3_RX_DMA_CHANNEL       4
#define DEV_USART3_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <3=>3 <4=>4
//     <i>  Selects DMA Stream (only Stream 3 or 4 can be used)
//     <o3> Channel <4=>4 <7=>7
//     <i>  Selects DMA Channel (only Channel 4 or 7 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART3_TX_DMA               0
#define DEV_USART3_TX_DMA_NUMBER        1
#define DEV_USART3_TX_DMA_STREAM        3
#define DEV_USART3_TX_DMA_CHANNEL       4
#define DEV_USART3_TX_DMA_PRIORITY      0

// </e> USART3 (Universal synchronous asynchronous receiver transmitter) [Driver_USART3]

// <e> UART4 (Universal asynchronous receiver transmitter) [Driver_USART4]
// <i> Configuration settings for Driver_USART4 in component ::CMSIS Driver:USART
#define DEV_UART4                      0

//   <o> UART4_TX Pin <0=>Not Used <1=>PA0 <2=>PA12 <3=>PC10 <4=>PD1 <5=>PH13
#define   DEV_UART4_TX_ID              0
#if      (DEV_UART4_TX_ID == 0)
  #define DEV_UART4_TX                 0
#elif    (DEV_UART4_TX_ID == 1)
  #define DEV_UART4_TX                 1
  #define DEV_UART4_TX_PORT            GPIO_PORT_A
  #define DEV_UART4_TX_PIN             GPIO_PIN_0
  #define DEV_UART4_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_TX_ID == 2)
  #define DEV_UART4_TX                 1
  #define DEV_UART4_TX_PORT            GPIO_PORT_A
  #define DEV_UART4_TX_PIN             GPIO_PIN_12
  #define DEV_UART4_TX_FUNC            GPIO_PIN_FUNC_6
#elif    (DEV_UART4_TX_ID == 3)
  #define DEV_UART4_TX                 1
  #define DEV_UART4_TX_PORT            GPIO_PORT_C
  #define DEV_UART4_TX_PIN             GPIO_PIN_10
  #define DEV_UART4_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_TX_ID == 4)
  #define DEV_UART4_TX                 1
  #define DEV_UART4_TX_PORT            GPIO_PORT_D
  #define DEV_UART4_TX_PIN             GPIO_PIN_1
  #define DEV_UART4_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_TX_ID == 5)
  #define DEV_UART4_TX                 1
  #define DEV_UART4_TX_PORT            GPIO_PORT_H
  #define DEV_UART4_TX_PIN             GPIO_PIN_13
  #define DEV_UART4_TX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART4_TX Pin Configuration!"
#endif

//   <o> UART4_RX Pin <0=>Not Used <1=>PA1 <2=>PA11 <3=>PC11 <4=>PD0 <5=>PH14 <6=>PI9
#define   DEV_UART4_RX_ID              0
#if      (DEV_UART4_RX_ID == 0)
  #define DEV_UART4_RX                 0
#elif    (DEV_UART4_RX_ID == 1)
  #define DEV_UART4_RX                 1
  #define DEV_UART4_RX_PORT            GPIO_PORT_A
  #define DEV_UART4_RX_PIN             GPIO_PIN_1
  #define DEV_UART4_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_RX_ID == 2)
  #define DEV_UART4_RX                 1
  #define DEV_UART4_RX_PORT            GPIO_PORT_A
  #define DEV_UART4_RX_PIN             GPIO_PIN_11
  #define DEV_UART4_RX_FUNC            GPIO_PIN_FUNC_6
#elif    (DEV_UART4_RX_ID == 3)
  #define DEV_UART4_RX                 1
  #define DEV_UART4_RX_PORT            GPIO_PORT_C
  #define DEV_UART4_RX_PIN             GPIO_PIN_11
  #define DEV_UART4_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_RX_ID == 4)
  #define DEV_UART4_RX                 1
  #define DEV_UART4_RX_PORT            GPIO_PORT_D
  #define DEV_UART4_RX_PIN             GPIO_PIN_0
  #define DEV_UART4_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_RX_ID == 5)
  #define DEV_UART4_RX                 1
  #define DEV_UART4_RX_PORT            GPIO_PORT_H
  #define DEV_UART4_RX_PIN             GPIO_PIN_14
  #define DEV_UART4_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART4_RX_ID == 6)
  #define DEV_UART4_RX                 1
  #define DEV_UART4_RX_PORT            GPIO_PORT_I
  #define DEV_UART4_RX_PIN             GPIO_PIN_9
  #define DEV_UART4_RX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART4_RX Pin Configuration!"
#endif

//   <o> UART4_CTS Pin <0=>Not Used <1=>PB0 <2=>PB15
#define   DEV_UART4_CTS_ID             0
#if      (DEV_UART4_CTS_ID == 0)
  #define DEV_UART4_CTS                0
#elif    (DEV_UART4_CTS_ID == 1)
  #define DEV_UART4_CTS                1
  #define DEV_UART4_CTS_PORT           GPIO_PORT_B
  #define DEV_UART4_CTS_PIN            GPIO_PIN_0
  #define DEV_UART4_CTS_FUNC           GPIO_PIN_FUNC_8
#elif    (DEV_UART4_CTS_ID == 2)
  #define DEV_UART4_CTS                1
  #define DEV_UART4_CTS_PORT           GPIO_PORT_B
  #define DEV_UART4_CTS_PIN            GPIO_PIN_15
  #define DEV_UART4_CTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid UART4_CTS Pin Configuration!"
#endif

//   <o> UART4_RTS Pin <0=>Not Used <1=>PA15 <2=>PB14
#define   DEV_UART4_RTS_ID             0
#if      (DEV_UART4_RTS_ID == 0)
  #define DEV_UART4_RTS                0
#elif    (DEV_UART4_RTS_ID == 1)
  #define DEV_UART4_RTS                1
  #define DEV_UART4_RTS_PORT           GPIO_PORT_A
  #define DEV_UART4_RTS_PIN            GPIO_PIN_15
  #define DEV_UART4_RTS_FUNC           GPIO_PIN_FUNC_8
#elif    (DEV_UART4_RTS_ID == 2)
  #define DEV_UART4_RTS                1
  #define DEV_UART4_RTS_PORT           GPIO_PORT_B
  #define DEV_UART4_RTS_PIN            GPIO_PIN_14
  #define DEV_UART4_RTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid UART4_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <2=>2
//     <i>  Selects DMA Stream (only Stream 2 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART4_RX_DMA               0
#define DEV_UART4_RX_DMA_NUMBER        1
#define DEV_UART4_RX_DMA_STREAM        2
#define DEV_UART4_RX_DMA_CHANNEL       4
#define DEV_UART4_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <4=>4
//     <i>  Selects DMA Stream (only Stream 4 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART4_TX_DMA               0
#define DEV_UART4_TX_DMA_NUMBER        1
#define DEV_UART4_TX_DMA_STREAM        4
#define DEV_UART4_TX_DMA_CHANNEL       4
#define DEV_UART4_TX_DMA_PRIORITY      0

// </e> UART4 (Universal asynchronous receiver transmitter) [Driver_USART4]

// <e> UART5 (Universal asynchronous receiver transmitter) [Driver_USART5]
// <i> Configuration settings for Driver_USART5 in component ::CMSIS Driver:USART
#define DEV_UART5                      0

//   <o> UART5_TX Pin <0=>Not Used <1=>PB6 <2=>PB9 <3=>PB13 <4=>PC12
#define   DEV_UART5_TX_ID              0
#if      (DEV_UART5_TX_ID == 0)
  #define DEV_UART5_TX                 0
#elif    (DEV_UART5_TX_ID == 1)
  #define DEV_UART5_TX                 1
  #define DEV_UART5_TX_PORT            GPIO_PORT_B
  #define DEV_UART5_TX_PIN             GPIO_PIN_6
  #define DEV_UART5_TX_FUNC            GPIO_PIN_FUNC_1
#elif    (DEV_UART5_TX_ID == 2)
  #define DEV_UART5_TX                 1
  #define DEV_UART5_TX_PORT            GPIO_PORT_B
  #define DEV_UART5_TX_PIN             GPIO_PIN_9
  #define DEV_UART5_TX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_UART5_TX_ID == 3)
  #define DEV_UART5_TX                 1
  #define DEV_UART5_TX_PORT            GPIO_PORT_B
  #define DEV_UART5_TX_PIN             GPIO_PIN_13
  #define DEV_UART5_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART5_TX_ID == 4)
  #define DEV_UART5_TX                 1
  #define DEV_UART5_TX_PORT            GPIO_PORT_C
  #define DEV_UART5_TX_PIN             GPIO_PIN_12
  #define DEV_UART5_TX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART5_TX Pin Configuration!"
#endif

//   <o> UART5_RX Pin <0=>Not Used <1=>PB5 <2=>PB8 <3=>PB12 <4=>PD2
#define   DEV_UART5_RX_ID              0
#if      (DEV_UART5_RX_ID == 0)
  #define DEV_UART5_RX                 0
#elif    (DEV_UART5_RX_ID == 1)
  #define DEV_UART5_RX                 1
  #define DEV_UART5_RX_PORT            GPIO_PORT_B
  #define DEV_UART5_RX_PIN             GPIO_PIN_5
  #define DEV_UART5_RX_FUNC            GPIO_PIN_FUNC_1
#elif    (DEV_UART5_RX_ID == 2)
  #define DEV_UART5_RX                 1
  #define DEV_UART5_RX_PORT            GPIO_PORT_B
  #define DEV_UART5_RX_PIN             GPIO_PIN_8
  #define DEV_UART5_RX_FUNC            GPIO_PIN_FUNC_7
#elif    (DEV_UART5_RX_ID == 3)
  #define DEV_UART5_RX                 1
  #define DEV_UART5_RX_PORT            GPIO_PORT_B
  #define DEV_UART5_RX_PIN             GPIO_PIN_12
  #define DEV_UART5_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART5_RX_ID == 4)
  #define DEV_UART5_RX                 1
  #define DEV_UART5_RX_PORT            GPIO_PORT_D
  #define DEV_UART5_RX_PIN             GPIO_PIN_2
  #define DEV_UART5_RX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART5_RX Pin Configuration!"
#endif

//   <o> UART5_CTS Pin <0=>Not Used <1=>PC9
#define   DEV_UART5_CTS_ID             0
#if      (DEV_UART5_CTS_ID == 0)
  #define DEV_UART5_CTS                0
#elif    (DEV_UART5_CTS_ID == 1)
  #define DEV_UART5_CTS                1
  #define DEV_UART5_CTS_PORT           GPIO_PORT_C
  #define DEV_UART5_CTS_PIN            GPIO_PIN_9
  #define DEV_UART5_CTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid UART5_CTS Pin Configuration!"
#endif

//   <o> UART5_RTS Pin <0=>Not Used <1=>PC8
#define   DEV_UART5_RTS_ID             0
#if      (DEV_UART5_RTS_ID == 0)
  #define DEV_UART5_RTS                0
#elif    (DEV_UART5_RTS_ID == 1)
  #define DEV_UART5_RTS                1
  #define DEV_UART5_RTS_PORT           GPIO_PORT_C
  #define DEV_UART5_RTS_PIN            GPIO_PIN_8
  #define DEV_UART5_RTS_FUNC           GPIO_PIN_FUNC_7
#else
  #error "Invalid UART5_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0
//     <i>  Selects DMA Stream (only Stream 0 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART5_RX_DMA               0
#define DEV_UART5_RX_DMA_NUMBER        1
#define DEV_UART5_RX_DMA_STREAM        0
#define DEV_UART5_RX_DMA_CHANNEL       4
#define DEV_UART5_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <7=>7
//     <i>  Selects DMA Stream (only Stream 7 can be used)
//     <o3> Channel <4=>4
//     <i>  Selects DMA Channel (only Channel 4 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART5_TX_DMA               0
#define DEV_UART5_TX_DMA_NUMBER        1
#define DEV_UART5_TX_DMA_STREAM        7
#define DEV_UART5_TX_DMA_CHANNEL       4
#define DEV_UART5_TX_DMA_PRIORITY      0

// </e> UART5 (Universal asynchronous receiver transmitter) [Driver_USART5]

// <e> USART6 (Universal synchronous asynchronous receiver transmitter) [Driver_USART6]
// <i> Configuration settings for Driver_USART6 in component ::CMSIS Driver:USART
#define DEV_USART6                      0

//   <o> USART6_TX Pin <0=>Not Used <1=>PC6 <2=>PG14
#define   DEV_USART6_TX_ID              0
#if      (DEV_USART6_TX_ID == 0)
  #define DEV_USART6_TX                 0
#elif    (DEV_USART6_TX_ID == 1)
  #define DEV_USART6_TX                 1
  #define DEV_USART6_TX_PORT            GPIO_PORT_C
  #define DEV_USART6_TX_PIN             GPIO_PIN_6
  #define DEV_USART6_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_USART6_TX_ID == 2)
  #define DEV_USART6_TX                 1
  #define DEV_USART6_TX_PORT            GPIO_PORT_G
  #define DEV_USART6_TX_PIN             GPIO_PIN_14
  #define DEV_USART6_TX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid USART6_TX Pin Configuration!"
#endif

//   <o> USART6_RX Pin <0=>Not Used <1=>PC7 <2=>PG9
#define   DEV_USART6_RX_ID              0
#if      (DEV_USART6_RX_ID == 0)
  #define DEV_USART6_RX                 0
#elif    (DEV_USART6_RX_ID == 1)
  #define DEV_USART6_RX                 1
  #define DEV_USART6_RX_PORT            GPIO_PORT_C
  #define DEV_USART6_RX_PIN             GPIO_PIN_7
  #define DEV_USART6_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_USART6_RX_ID == 2)
  #define DEV_USART6_RX                 1
  #define DEV_USART6_RX_PORT            GPIO_PORT_G
  #define DEV_USART6_RX_PIN             GPIO_PIN_9
  #define DEV_USART6_RX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid USART6_RX Pin Configuration!"
#endif

//   <o> USART6_CK Pin <0=>Not Used <1=>PC8 <2=>PG7
#define   DEV_USART6_CK_ID              0
#if      (DEV_USART6_CK_ID == 0)
  #define DEV_USART6_CK                 0
#elif    (DEV_USART6_CK_ID == 1)
  #define DEV_USART6_CK                 1
  #define DEV_USART6_CK_PORT            GPIO_PORT_C
  #define DEV_USART6_CK_PIN             GPIO_PIN_8
  #define DEV_USART6_CK_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_USART6_CK_ID == 2)
  #define DEV_USART6_CK                 1
  #define DEV_USART6_CK_PORT            GPIO_PORT_G
  #define DEV_USART6_CK_PIN             GPIO_PIN_7
  #define DEV_USART6_CK_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid USART6_CK Pin Configuration!"
#endif

//   <o> USART6_CTS Pin <0=>Not Used <1=>PG13 <2=>PG15
#define   DEV_USART6_CTS_ID             0
#if      (DEV_USART6_CTS_ID == 0)
  #define DEV_USART6_CTS                0
#elif    (DEV_USART6_CTS_ID == 1)
  #define DEV_USART6_CTS                1
  #define DEV_USART6_CTS_PORT           GPIO_PORT_G
  #define DEV_USART6_CTS_PIN            GPIO_PIN_13
  #define DEV_USART6_CTS_FUNC           GPIO_PIN_FUNC_8
#elif    (DEV_USART6_CTS_ID == 2)
  #define DEV_USART6_CTS                1
  #define DEV_USART6_CTS_PORT           GPIO_PORT_G
  #define DEV_USART6_CTS_PIN            GPIO_PIN_15
  #define DEV_USART6_CTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid USART6_CTS Pin Configuration!"
#endif

//   <o> USART6_RTS Pin <0=>Not Used <1=>PG8 <2=>PG12
#define   DEV_USART6_RTS_ID             0
#if      (DEV_USART6_RTS_ID == 0)
  #define DEV_USART6_RTS                0
#elif    (DEV_USART6_RTS_ID == 1)
  #define DEV_USART6_RTS                1
  #define DEV_USART6_RTS_PORT           GPIO_PORT_G
  #define DEV_USART6_RTS_PIN            GPIO_PIN_8
  #define DEV_USART6_RTS_FUNC           GPIO_PIN_FUNC_8
#elif    (DEV_USART6_RTS_ID == 2)
  #define DEV_USART6_RTS                1
  #define DEV_USART6_RTS_PORT           GPIO_PORT_G
  #define DEV_USART6_RTS_PIN            GPIO_PIN_12
  #define DEV_USART6_RTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid USART6_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <1=>1 <2=>2
//     <i>  Selects DMA Stream (only Stream 1 or 2 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART6_RX_DMA               0
#define DEV_USART6_RX_DMA_NUMBER        2
#define DEV_USART6_RX_DMA_STREAM        1
#define DEV_USART6_RX_DMA_CHANNEL       5
#define DEV_USART6_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <2=>2
//     <i>  Selects DMA Number (only DMA2 can be used)
//     <o2> Stream <6=>6 <7=>7
//     <i>  Selects DMA Stream (only Stream 6 or 7 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_USART6_TX_DMA               0
#define DEV_USART6_TX_DMA_NUMBER        2
#define DEV_USART6_TX_DMA_STREAM        6
#define DEV_USART6_TX_DMA_CHANNEL       5
#define DEV_USART6_TX_DMA_PRIORITY      0

// </e> USART6 (Universal synchronous asynchronous receiver transmitter) [Driver_USART6]

// <e> UART7 (Universal asynchronous receiver transmitter) [Driver_USART7]
// <i> Configuration settings for Driver_USART7 in component ::CMSIS Driver:USART
#define DEV_UART7                      0

//   <o> UART7_TX Pin <0=>Not Used <1=>PA15 <2=>PB4 <3=>PE8 <4=>PF7
#define   DEV_UART7_TX_ID              0
#if      (DEV_UART7_TX_ID == 0)
  #define DEV_UART7_TX                 0
#elif    (DEV_UART7_TX_ID == 1)
  #define DEV_UART7_TX                 1
  #define DEV_UART7_TX_PORT            GPIO_PORT_A
  #define DEV_UART7_TX_PIN             GPIO_PIN_15
  #define DEV_UART7_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART7_TX_ID == 2)
  #define DEV_UART7_TX                 1
  #define DEV_UART7_TX_PORT            GPIO_PORT_B
  #define DEV_UART7_TX_PIN             GPIO_PIN_4
  #define DEV_UART7_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART7_TX_ID == 3)
  #define DEV_UART7_TX                 1
  #define DEV_UART7_TX_PORT            GPIO_PORT_E
  #define DEV_UART7_TX_PIN             GPIO_PIN_8
  #define DEV_UART7_TX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART7_TX_ID == 4)
  #define DEV_UART7_TX                 1
  #define DEV_UART7_TX_PORT            GPIO_PORT_F
  #define DEV_UART7_TX_PIN             GPIO_PIN_7
  #define DEV_UART7_TX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART7_TX Pin Configuration!"
#endif

//   <o> UART7_RX Pin <0=>Not Used <1=>PA8 <2=>PB3 <3=>PE7 <4=>PF6
#define   DEV_UART7_RX_ID              0
#if      (DEV_UART7_RX_ID == 0)
  #define DEV_UART7_RX                 0
#elif    (DEV_UART7_RX_ID == 1)
  #define DEV_UART7_RX                 1
  #define DEV_UART7_RX_PORT            GPIO_PORT_A
  #define DEV_UART7_RX_PIN             GPIO_PIN_8
  #define DEV_UART7_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART7_RX_ID == 2)
  #define DEV_UART7_RX                 1
  #define DEV_UART7_RX_PORT            GPIO_PORT_B
  #define DEV_UART7_RX_PIN             GPIO_PIN_3
  #define DEV_UART7_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART7_RX_ID == 3)
  #define DEV_UART7_RX                 1
  #define DEV_UART7_RX_PORT            GPIO_PORT_E
  #define DEV_UART7_RX_PIN             GPIO_PIN_7
  #define DEV_UART7_RX_FUNC            GPIO_PIN_FUNC_8
#elif    (DEV_UART7_RX_ID == 4)
  #define DEV_UART7_RX                 1
  #define DEV_UART7_RX_PORT            GPIO_PORT_F
  #define DEV_UART7_RX_PIN             GPIO_PIN_6
  #define DEV_UART7_RX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART7_RX Pin Configuration!"
#endif

//   <o> UART7_CTS Pin <0=>Not Used <1=>PE10 <2=>PF9
#define   DEV_UART7_CTS_ID             0
#if      (DEV_UART7_CTS_ID == 0)
  #define DEV_UART7_CTS                0
#elif    (DEV_UART7_CTS_ID == 1)
  #define DEV_UART7_CTS                1
  #define DEV_UART7_CTS_PORT           GPIO_PORT_E
  #define DEV_UART7_CTS_PIN            GPIO_PIN_10
  #define DEV_UART7_CTS_FUNC           GPIO_PIN_FUNC_8
#elif    (DEV_UART7_CTS_ID == 2)
  #define DEV_UART7_CTS                1
  #define DEV_UART7_CTS_PORT           GPIO_PORT_F
  #define DEV_UART7_CTS_PIN            GPIO_PIN_9
  #define DEV_UART7_CTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid UART7_CTS Pin Configuration!"
#endif

//   <o> UART7_RTS Pin <0=>Not Used <1=>PE9 <2=>PF8
#define   DEV_UART7_RTS_ID             0
#if      (DEV_UART7_RTS_ID == 0)
  #define DEV_UART7_RTS                0
#elif    (DEV_UART7_RTS_ID == 1)
  #define DEV_UART7_RTS                1
  #define DEV_UART7_RTS_PORT           GPIO_PORT_E
  #define DEV_UART7_RTS_PIN            GPIO_PIN_9
  #define DEV_UART7_RTS_FUNC           GPIO_PIN_FUNC_8
#elif    (DEV_UART7_RTS_ID == 2)
  #define DEV_UART7_RTS                1
  #define DEV_UART7_RTS_PORT           GPIO_PORT_F
  #define DEV_UART7_RTS_PIN            GPIO_PIN_8
  #define DEV_UART7_RTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid UART7_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <3=>3
//     <i>  Selects DMA Stream (only Stream 3 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART7_RX_DMA               0
#define DEV_UART7_RX_DMA_NUMBER        1
#define DEV_UART7_RX_DMA_STREAM        3
#define DEV_UART7_RX_DMA_CHANNEL       5
#define DEV_UART7_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <1=>1
//     <i>  Selects DMA Stream (only Stream 1 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART7_TX_DMA               0
#define DEV_UART7_TX_DMA_NUMBER        1
#define DEV_UART7_TX_DMA_STREAM        1
#define DEV_UART7_TX_DMA_CHANNEL       5
#define DEV_UART7_TX_DMA_PRIORITY      0

// </e> UART7 (Universal asynchronous receiver transmitter) [Driver_USART7]

// <e> UART8 (Universal asynchronous receiver transmitter) [Driver_USART8]
// <i> Configuration settings for Driver_USART8 in component ::CMSIS Driver:USART
#define DEV_UART8                      0

//   <o> UART8_TX Pin <0=>Not Used <1=>PE1
#define   DEV_UART8_TX_ID              0
#if      (DEV_UART8_TX_ID == 0)
  #define DEV_UART8_TX                 0
#elif    (DEV_UART8_TX_ID == 1)
  #define DEV_UART8_TX                 1
  #define DEV_UART8_TX_PORT            GPIO_PORT_E
  #define DEV_UART8_TX_PIN             GPIO_PIN_1
  #define DEV_UART8_TX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART8_TX Pin Configuration!"
#endif

//   <o> UART8_RX Pin <0=>Not Used <1=>PE0
#define   DEV_UART8_RX_ID              0
#if      (DEV_UART8_RX_ID == 0)
  #define DEV_UART8_RX                 0
#elif    (DEV_UART8_RX_ID == 1)
  #define DEV_UART8_RX                 1
  #define DEV_UART8_RX_PORT            GPIO_PORT_E
  #define DEV_UART8_RX_PIN             GPIO_PIN_0
  #define DEV_UART8_RX_FUNC            GPIO_PIN_FUNC_8
#else
  #error "Invalid UART8_RX Pin Configuration!"
#endif

//   <o> UART8_CTS Pin <0=>Not Used <1=>PD14
#define   DEV_UART8_CTS_ID             0
#if      (DEV_UART8_CTS_ID == 0)
  #define DEV_UART8_CTS                0
#elif    (DEV_UART8_CTS_ID == 1)
  #define DEV_UART8_CTS                1
  #define DEV_UART8_CTS_PORT           GPIO_PORT_D
  #define DEV_UART8_CTS_PIN            GPIO_PIN_14
  #define DEV_UART8_CTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid UART8_CTS Pin Configuration!"
#endif

//   <o> UART8_RTS Pin <0=>Not Used <1=>PD15
#define   DEV_UART8_RTS_ID             0
#if      (DEV_UART8_RTS_ID == 0)
  #define DEV_UART8_RTS                0
#elif    (DEV_UART8_RTS_ID == 1)
  #define DEV_UART8_RTS                1
  #define DEV_UART8_RTS_PORT           GPIO_PORT_D
  #define DEV_UART8_RTS_PIN            GPIO_PIN_15
  #define DEV_UART8_RTS_FUNC           GPIO_PIN_FUNC_8
#else
  #error "Invalid UART8_RTS Pin Configuration!"
#endif

//   <e> DMA Rx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <6=>6
//     <i>  Selects DMA Stream (only Stream 6 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART8_RX_DMA               0
#define DEV_UART8_RX_DMA_NUMBER        1
#define DEV_UART8_RX_DMA_STREAM        6
#define DEV_UART8_RX_DMA_CHANNEL       5
#define DEV_UART8_RX_DMA_PRIORITY      0

//   <e> DMA Tx
//     <o1> Number <1=>1
//     <i>  Selects DMA Number (only DMA1 can be used)
//     <o2> Stream <0=>0
//     <i>  Selects DMA Stream (only Stream 0 can be used)
//     <o3> Channel <5=>5
//     <i>  Selects DMA Channel (only Channel 5 can be used)
//     <o4> Priority <0=>Low <1=>Medium <2=>High <3=>Very High
//     <i>  Selects DMA Priority
//   </e>
#define DEV_UART8_TX_DMA               0
#define DEV_UART8_TX_DMA_NUMBER        1
#define DEV_UART8_TX_DMA_STREAM        0
#define DEV_UART8_TX_DMA_CHANNEL       5
#define DEV_UART8_TX_DMA_PRIORITY      0

// </e> UART8 (Universal asynchronous receiver transmitter) [Driver_USART8]

#endif  /* __DEVICE_CONFIG_H */

/* ----------------------------- End of file ---------------------------------*/
