#ifndef __ROBOT_HPP
#define __ROBOT_HPP

#include "main.h"
#include "pros/misc.h"

//chassis motor ports
const int CHASSIS_LEFT_FRONT  = 19;
const int CHASSIS_LEFT_REAR   = 20;
const int CHASIIS_RIGHT_FRONT = 12;
const int CHASSIS_RIGHT_REAR  = 11;

//inkate motor ports
const int INTAKE_MOTOR_LEFT   = 14;
const int INTAKE_MOTOR_RIGHT  = 15;

//lever motor 
const int LEVER_MOTOR = 16;

//arm motor
const int ARM_MOTOR = 18;

//arm varibles
const int ARM_PRESETS[4]  = {0, -1920, -2205, -2505};
const int ARM_PRESETS_LEN = 3;

//chassis
extern pros::Motor chassis_left_front;
extern pros::Motor chassis_left_rear;
extern pros::Motor chassis_right_front;
extern pros::Motor chassis_right_rear;
extern pros::Motor intake_motor_left;
extern pros::Motor intake_motor_right;
extern pros::Motor lever_motor;
extern pros::Motor arm_motor;
extern pros::Controller master;

extern int autonSelection;

void blue_1cube();
void blue_4cube();
void red_1cube();
void red_4cube();
void skill1();

#endif