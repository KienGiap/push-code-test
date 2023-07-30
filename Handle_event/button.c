/*
 * I2C_handle.c
 *
 *  Created on: Jul 28, 2023
 *      Author: kien2
 */
#include"button.h"
#include"RTOS_test.h"
extern sl_joystick Init_joystick;


void button_TASK(void *arg)
{
 (void)&arg;
 sl_joystick_init(&Init_joystick);
 sl_joystick_start(&Init_joystick);
 //const TickType_t xDelay= pdMS_TO_TICKS(100);
 uint8_t a;
 sl_joystick_position_t position = 0x0u;
  while(1)
    {
     a =  sl_joystick_get_position(&Init_joystick,&position);
      if(position>0 && a ==0)
        {
          sl_led_toggle(&sl_led_led0);
               vTaskDelay(pdMS_TO_TICKS(1000));
               sl_led_toggle(&sl_led_led1);
               vTaskDelay(pdMS_TO_TICKS(1000));
        }
      vTaskDelay(pdMS_TO_TICKS(100));
    }
  vTaskSuspend(NULL);
}
