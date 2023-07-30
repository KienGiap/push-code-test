/*
 * TFT.h
 *
 *  Created on: Jul 28, 2023
 *      Author: kien2
 */

#ifndef TFT_H_
#define TFT_H_
#include <stdio.h>

#include "sl_board_control.h"
//#include "sl_simple_button_instances.h"
#include "em_assert.h"
#include "glib.h"
#include "dmd.h"

void memlcd_app_init(void);
void display_TASK(void *arg);

#endif /* TFT_H_ */
