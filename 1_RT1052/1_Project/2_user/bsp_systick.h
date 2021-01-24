#ifndef __BSP_SYSTICK_H__
#define __BSP_SYSTICK_H__

#include "MIMXRT1052.h"

void tick_delay_init(uint16_t SYSCLK);
void delay_us(uint32_t nus);
void delay_ms(uint16_t nms);




#endif
