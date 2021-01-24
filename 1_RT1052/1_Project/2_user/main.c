#include "board.h"
#include "fsl_debug_console.h"
#include "fsl_gpio.h"

#include "pin_mux.h"
#include "clock_config.h"

#include "bsp_systick.h"
#include "bsp_led.h"

int main(void)
{
	
    /* Board pin, clock, debug console init */
    BOARD_ConfigMPU();
    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
	
		tick_delay_init(600);		//system clock 600MHZ
		bsp_led_init();
		
	
		while(1)
		{		
				delay_ms(500);
				LED0_Toggle;
		
		}
	
}


