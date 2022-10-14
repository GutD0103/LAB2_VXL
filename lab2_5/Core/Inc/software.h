/*
 * software.h
 *
 *  Created on: Oct 11, 2022
 *      Author: ntdat
 */

#ifndef INC_SOFTWARE_H_
#define INC_SOFTWARE_H_

extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;
extern int timer5_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);
void setTimer5(int duration);
void timerRun();

#endif /* INC_SOFTWARE_H_ */
