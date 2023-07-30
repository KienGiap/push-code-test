/*
 * RTOS_test.c
 *
 *  Created on: Jul 27, 2023
 *      Author: KienGT
 */

#include"RTOS_test.h"

#define QUEUE_SIZE 20

/// Queue structure
sensor_report R_sensor_val;
uint8_t Blink = Blink_default;
/// handle task
TaskHandle_t xHandle1 = NULL;
TaskHandle_t xHandle2 = NULL;
BaseType_t xReturned_task1;
/// queue for display
QueueHandle_t Sensor_Queue;
QueueHandle_t Blink_Queue;

///Joystick
//sl_joystick Init_joystick = JOYSTICK_HANDLE_DEFAULT;


void task_init()
{
  Sensor_Queue = xQueueCreate(QUEUE_SIZE,sizeof(R_sensor_val));
  Blink_Queue = xQueueCreate(QUEUE_SIZE,sizeof(Blink));

    /** Read data from sensor task by I2c **/
  xReturned_task1 = xTaskCreate(read_sensor_TASK,
                                "read data from I2C",
                                configMINIMAL_STACK_SIZE,
                                NULL,
                                tskIDLE_PRIORITY + 1,
                                &xHandle1);
  EFM_ASSERT(xReturned_task1 == pdPASS);

  /** Display data receive to TFT display **/
  xTaskCreate(display_TASK,
              "display task",
              configMINIMAL_STACK_SIZE,
              NULL,
              tskIDLE_PRIORITY + 1,
              NULL);

  /** blink led task go here **/
 xTaskCreate(Blink_TASK,
              "blink led task",
              configMINIMAL_STACK_SIZE,
              NULL,
              tskIDLE_PRIORITY + 1,
              &xHandle2);
}
