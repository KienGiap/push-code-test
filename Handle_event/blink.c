/*
 * I2C_handle.c
 *
 *  Created on: Jul 28, 2023
 *      Author: kien2
 */
#include"blink.h"
#include"RTOS_test.h"
extern QueueHandle_t Blink_Queue;

void Blink_TASK(void *arg)
{
//  xQueuePeek()
//    uxQueueMessagesWaiting
  const TickType_t xDelay= pdMS_TO_TICKS(500);
 (void)&arg;
   uint8_t blink_mode = Blink_default;
  while(1)
  {
      if(pdTRUE == xQueueReceive(Blink_Queue,&blink_mode,10))
        {
          // Reset led status
          sl_led_turn_off(&sl_led_led0);
          sl_led_turn_off(&sl_led_led1);
        }
      switch(blink_mode){
        case Blink_default:
          sl_led_toggle(&sl_led_led0);
          sl_led_toggle(&sl_led_led1);
          vTaskDelay(xDelay);
          break;
        case Blink_led0:
          sl_led_turn_off(&sl_led_led1);
          sl_led_toggle(&sl_led_led0);
          vTaskDelay(xDelay);
          break;
        case Blink_led1:
          sl_led_turn_off(&sl_led_led0);
          sl_led_toggle(&sl_led_led1);
          vTaskDelay(xDelay);
          break;
        case Blink_both:
          sl_led_toggle(&sl_led_led0);
          vTaskDelay(xDelay);
          sl_led_toggle(&sl_led_led1);
          vTaskDelay(xDelay);
          break;
        case Turn_off:
          sl_led_turn_off(&sl_led_led0);
          sl_led_turn_off(&sl_led_led1);
          vTaskSuspend(NULL);
          break;
      }


  }
  vTaskSuspend(NULL);
}
