#include "bsp_led.h"




void bsp_led_init(void)
{
  /* Define the init structure for the output LED pin*/
  gpio_pin_config_t led_config = {kGPIO_DigitalOutput, 0, kGPIO_NoIntmode};
	
	
  CLOCK_EnableClock(kCLOCK_Iomuxc);           /* iomuxc clock (iomuxc_clk_enable): 0x03u */	
  IOMUXC_SetPinMux(
      IOMUXC_GPIO_AD_B1_03_GPIO1_IO19,        /* GPIO_AD_B0_09 is configured as GPIO1_IO09 */
      0U);   

  IOMUXC_SetPinConfig(
      IOMUXC_GPIO_AD_B1_03_GPIO1_IO19,        /* GPIO_AD_B0_09 PAD functional properties : */
      0x10B0u);                               /* Slew Rate Field: Slow Slew Rate
                                                 Drive Strength Field: R0/6
                                                 Speed Field: medium(100MHz)
                                                 Open Drain Enable Field: Open Drain Disabled
                                                 Pull / Keep Enable Field: Pull/Keeper Enabled
                                                 Pull / Keep Select Field: Keeper
                                                 Pull Up / Down Config. Field: 100K Ohm Pull Down
                                                 Hyst. Enable Field: Hysteresis Disabled */

	GPIO_PinInit(GPIO1, 19U, &led_config);
	
}

