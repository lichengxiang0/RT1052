#ifndef __BSP_LED_H__
#define __BSP_LED_H__


#include "board.h"
#include "fsl_gpio.h"

#include "pin_mux.h"
#include "clock_config.h"
#include "fsl_common.h"
#include "fsl_iomuxc.h"


#define LED0(n)		(n?GPIO_PinWrite(GPIO1,19,1):GPIO_PinWrite(GPIO1,19,0))
#define LED0_Toggle (GPIO1->DR ^= (1<<19)) 	//LED0输出电平翻转


void bsp_led_init(void);

#endif
