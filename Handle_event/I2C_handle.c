/*
 * I2C_handle.c
 *
 *  Created on: Jul 28, 2023
 *      Author: kien2
 */
#include"I2C_handle.h"
#include"RTOS_test.h"

extern sl_i2cspm_t *sl_i2cspm_sensor;
extern QueueHandle_t Sensor_Queue;
void read_sensor_TASK(void *arg)
{
  (void)&arg;
  sensor_report Sensor_val;
  const TickType_t xDelay = pdMS_TO_TICKS(50);
  while(1)
    {
      sl_si70xx_init(sl_i2cspm_sensor, SI7021_ADDR);
      sl_si70xx_measure_rh_and_temp(sl_i2cspm_sensor, SI7021_ADDR,
                                    &Sensor_val.humid, &Sensor_val.temp);
      xQueueSend(Sensor_Queue,&Sensor_val,0);
      vTaskDelay(xDelay);
    }
  vTaskSuspend(NULL);
}

