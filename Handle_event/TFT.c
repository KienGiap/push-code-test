/*
 * TFT.c
 *
 *  Created on: Jul 28, 2023
 *      Author: kien2
 */
#include"TFT.h"
#include"RTOS_test.h"

GLIB_Context_t glibContext;
static int currentLine = 0;
extern QueueHandle_t Sensor_Queue;
extern uint8_t Blink;
char *led_mode_display[5] =
    {"Blink_default","Blink_led0",
     "Blink_led1","Blink_both","Turned_off"};

void memlcd_app_init(void)
{
  uint32_t status;

  /* Enable the memory lcd */
  status = sl_board_enable_display();
  EFM_ASSERT(status == SL_STATUS_OK);

  /* Initialize the DMD support for memory lcd display */
  status = DMD_init(0);
  EFM_ASSERT(status == DMD_OK);

  /* Initialize the glib context */
  status = GLIB_contextInit(&glibContext);
  EFM_ASSERT(status == GLIB_OK);

  glibContext.backgroundColor = White;
  glibContext.foregroundColor = Black;

  /* Fill lcd with background color */
  GLIB_clear(&glibContext);

  /* Use Narrow font */
  GLIB_setFont(&glibContext, (GLIB_Font_t *) &GLIB_FontNarrow6x8);

  /* Draw text on the memory lcd display*/
  GLIB_drawStringOnLine(&glibContext,
                        "Init system",
                        currentLine++,
                        GLIB_ALIGN_LEFT,
                        5,
                        5,
                        true);
  GLIB_drawStringOnLine(&glibContext,
                        "reading data...",
                        currentLine++,
                        GLIB_ALIGN_LEFT,
                        5,
                        5,
                        true);
  DMD_updateDisplay();
}

void display_TASK(void *arg)
{
 (void)&arg;
 const TickType_t xDelay= pdMS_TO_TICKS(200);
 vTaskDelay(pdMS_TO_TICKS(1000));

  while(1)
    {
      char Humid_display[30];
      char Temp_display[30];
      char led_mode[30];
      sensor_report Receive_sensor_val;
      xQueueReceive(Sensor_Queue,&Receive_sensor_val,0xff);

      sprintf(Humid_display,"humid: %02d.%02d%%",
              Receive_sensor_val.humid/1000,
              Receive_sensor_val.humid%1000/10);
      sprintf(Temp_display,"Temp: %02d.%02d 'C",
              Receive_sensor_val.temp/1000,
              Receive_sensor_val.temp%1000/10);
      sprintf(led_mode,led_mode_display[Blink]);
      GLIB_clear(&glibContext);
      GLIB_drawStringOnLine(&glibContext,
                            Humid_display,
                            0,
                            GLIB_ALIGN_LEFT,
                            5,
                            5,
                            true);
      GLIB_drawStringOnLine(&glibContext,
                            Temp_display,
                            1,
                            GLIB_ALIGN_LEFT,
                            5,
                            5,
                            true);
      GLIB_drawStringOnLine(&glibContext,
                            led_mode,
                            2,
                            GLIB_ALIGN_LEFT,
                            5,
                            5,
                            true);
      DMD_updateDisplay();
      vTaskDelay(xDelay);
    }
  vTaskSuspend(NULL);
}

