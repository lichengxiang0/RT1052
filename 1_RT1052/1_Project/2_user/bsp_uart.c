#include "bsp_uart.h"


//uart1����ǰ���ʼ�����
void bsp_uart1_init(uint32_t baud)
{
		lpuart_config_t config;
    LPUART_GetDefaultConfig(&config);
    config.baudRate_Bps = baud;
    config.enableTx = true;
    config.enableRx = true;

    LPUART_Init(LPUART1, &config, BOARD_DebugConsoleSrcFreq());
	

}




