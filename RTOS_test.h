/*
 * RTOS_test.c
 *
 *  Created on: Jul 27, 2023
 *      Author: KienGT
 */

#ifndef RTOS_TEST_C_
#define RTOS_TEST_C_

#include"stddef.h"
#include"stdint.h"
#include"FreeRTOSConfig.h"
#include"FreeRTOS.h"
#include"task.h"
#include"sl_simple_led.h"
#include"sl_simple_led_instances.h"
#include"sl_simple_button.h"
#include"sl_simple_button_instances.h"
#include"queue.h"
#include"stdio.h"
#include"string.h"
#include"I2C_handle.h"
#include"TFT.h"
#include"blink.h"
#include"button.h"
#include"sl_si70xx.h"
#include"sl_joystick.h"

typedef struct {
  int32_t temp;
  uint32_t humid;
}sensor_report;
typedef enum {
  Blink_default = 0x00, //  2 led blink same time
  Blink_led0 = 0x01,
  Blink_led1 = 0x02,
  Blink_both = 0x03, // 2 led blink but no the same time
  Turn_off   = 0x04
}Blink_mode;


void task_init();
void read_sensor_TASK(void *arg);
void display_TASK(void *arg);
void button_TASK(void *arg);
void Blink_TASK(void *arg);

#endif /* RTOS_TEST_C_ */
