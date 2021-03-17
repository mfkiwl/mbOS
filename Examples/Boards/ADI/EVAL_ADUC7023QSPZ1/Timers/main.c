/*
 * Copyright (C) 2021 Sergey Koshkin <koshkin.sergey@gmail.com>
 * All rights reserved.
 *
 * SPDX-License-Identifier: Apache-2.0
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

#include "asm/aduc7023.h"
#include "Kernel/kernel.h"

int main(void)
{
  osStatus_t status;

  TIM1->LD = 100;

  status = osKernelInitialize();
  status = osKernelStart();
}

uint32_t IRQ_GetActiveIRQ(void)
{
  return (0U);
}

void* IRQ_GetHandler(uint32_t id)
{
  return (NULL);
}

void IRQ_EndOfInterrupt(uint32_t id)
{

}
