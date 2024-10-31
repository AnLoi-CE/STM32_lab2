/*
 * software_timer.h
 *
 *  Created on: Oct 3, 2024
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#include "main.h"
extern int timer1_flag;
extern int timer2_flag;
//extern int led_buffer[4] = {1 , 2 , 3 , 0};

void setTimer1(int duration);
void setTimer2(int duration);
void timerRun();
void display7SEG(int num);
void update7SEG(int index);


#endif /* INC_SOFTWARE_TIMER_H_ */
