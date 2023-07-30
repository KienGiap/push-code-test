/***************************************************************************//**
 * @file
 * @brief Top level application functions
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

/***************************************************************************//**
 * Initialize application.
 ******************************************************************************/
#include"RTOS_test.h"
#include"TFT.h"

extern uint8_t Blink;
extern QueueHandle_t Blink_Queue;
extern TaskHandle_t xHandle2;
void app_init(void)
{
  task_init();
  memlcd_app_init();
}

/*----------Handler of Buttons using interrupt------------*/
void sl_button_on_change(const sl_button_t *handle)
{
  BaseType_t xHigherPriorityTaskWoken = pdFAIL;
  if (sl_button_get_state(handle) == SL_SIMPLE_BUTTON_PRESSED) {
    if (&sl_button_btn0 == handle)
        {
        Blink ++;
        if(Blink > 3) Blink = Blink_default;

        xTaskResumeFromISR(xHandle2);
        }
    else if (&sl_button_btn1 == handle)
      {
        Blink = Turn_off;
      }
    xQueueSendFromISR(Blink_Queue,&Blink,&xHigherPriorityTaskWoken);
    portYIELD_FROM_ISR(xHigherPriorityTaskWoken);
  }
}
/***************************************************************************//**
 * App ticking function.
 ******************************************************************************/
void app_process_action(void)
{
}
