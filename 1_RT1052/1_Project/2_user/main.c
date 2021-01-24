#include "board.h"
#include "fsl_debug_console.h"
#include "fsl_gpio.h"

#include "pin_mux.h"
#include "clock_config.h"

#include "bsp_systick.h"
#include "bsp_led.h"
#include "bsp_uart.h"


uint8_t txbuff[] = "Lpuart polling example\r\nBoard will send back received characters\r\n";
uint8_t rxbuff[20] = {0};



int main(void)
{
		uint8_t ch;
	
    /* Board pin, clock, debug console init */
    BOARD_ConfigMPU();
    BOARD_InitPins();
    BOARD_BootClockRUN();
    BOARD_InitDebugConsole();
	
		tick_delay_init(600);		//system clock 600MHZ
		bsp_led_init();
		bsp_uart1_init(115200);
	
	
		LPUART_WriteBlocking(LPUART1, txbuff, sizeof(txbuff) - 1);	
		while(1)
		{		
//				delay_ms(500);
//				LED0_Toggle;
			  LPUART_ReadBlocking(LPUART1, &ch, 1);
        LPUART_WriteBlocking(LPUART1, &ch, 1);
		
		}
	
}


