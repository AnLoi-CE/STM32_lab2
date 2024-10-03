/*
 * software_timer.h
 *
 *  Created on: Oct 3, 2024
 *      Author: DELL
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;

void setTimer1(int duration);
void timerRun();
void display7SEG(int num);

#endif /* INC_SOFTWARE_TIMER_H_ */
