/**
  ******************************************************************************
  * File Name          : stepper_control.h
  * Description        : This file contains all the functions prototypes for 
  *                      the stepper motor control.
  ******************************************************************************
  * Author: Sean Kim
  * Original author: Yumi
  * Date: 2019.08.30
  ******************************************************************************
  */

#ifndef INC_STEPPER_CONTROL_H_
#define INC_STEPPER_CONTROL_H_

#include "tim.h"

void init_stepper_control(TIM_HandleTypeDef *_htim);
void set_speed(unsigned int _val);
void set_direction(int _val);
void set_feed_steps(int _val);
void update_step(); //
void update_speed(); //
void run();





#endif /* INC_STEPPER_CONTROL_H_ */
