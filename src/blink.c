// INCLUDES="delay/delay_s delay/delay_ms delay/delay_us gpio/gpio_pin_configure gpio/gpio_pin_val_complement"

#include "reg24le1.h"
#include "delay.h"
#include "gpio.h"

void main()
{
 // Initialize Ports
 gpio_pin_configure(GPIO_PIN_ID_P0_0, GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT | GPIO_PIN_CONFIG_OPTION_PIN_MODE_INPUT_BUFFER_ON_PULL_UP_RESISTOR);
 gpio_pin_configure(GPIO_PIN_ID_P0_2, GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT | GPIO_PIN_CONFIG_OPTION_PIN_MODE_INPUT_BUFFER_ON_PULL_DOWN_RESISTOR);
 gpio_pin_configure(GPIO_PIN_ID_P1_6, GPIO_PIN_CONFIG_OPTION_DIR_OUTPUT | GPIO_PIN_CONFIG_OPTION_PIN_MODE_INPUT_BUFFER_ON_NO_RESISTORS | GPIO_PIN_CONFIG_OPTION_PIN_MODE_OUTPUT_BUFFER_HIGH_DRIVE_STRENGTH);
 
 while (true)
 {
  delay_s(1);
  gpio_pin_val_complement(GPIO_PIN_ID_P0_0);
  gpio_pin_val_complement(GPIO_PIN_ID_P0_2);
  gpio_pin_val_complement(GPIO_PIN_ID_P1_6);
 }  
}
