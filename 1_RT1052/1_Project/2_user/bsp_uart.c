#include "bsp_uart.h"


//uart1已在前面初始化完成
void bsp_uart1_init(uint32_t baud)
{
		lpuart_config_t config;
    LPUART_GetDefaultConfig(&config);
    config.baudRate_Bps = baud;
    config.enableTx = true;
    config.enableRx = true;

    LPUART_Init(LPUART1, &config, BOARD_DebugConsoleSrcFreq());
	

}




