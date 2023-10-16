// #ifndef BASIC_H
// #define BASIC_H
// #include "interfaces_and_device.h"

// int sgn(double a) {
//   return a >= 0 ? 1 : -1;
// }

// void intake(double speed) {
//   Intake.spin(fwd,120speed,voltageUnits::mV);
// }

// void Forward(double speed) {
//   speed=speed120;
//   LA.spin(fwd,speed, voltageUnits::mV);
//   LB.spin(fwd,speed, voltageUnits::mV);
//   RA.spin(fwd,-speed, voltageUnits::mV);
//   RB.spin(fwd,-speed, voltageUnits::mV);
// }

// void Rotate(double speed) {
//   speed=speed*120;
//   LA.spin(fwd,speed, voltageUnits::mV);
//   LB.spin(fwd,speed, voltageUnits::mV);
//   RA.spin(fwd,speed, voltageUnits::mV);
//   RB.spin(fwd,speed, voltageUnits::mV);
// }

// void timerForward(double speed,double tim) {
//   int a = Brain.timer(msec);
//   while (Brain.timer(msec) - a < tim)
//   {
//     Forward(speed);
//     vexDelay(10);
//   }
//   Forward(0);
// }

// void timerRotate(double speed,double tim) {
//   int b = Brain.timer(msec);
//   while (Brain.timer(msec) - b < tim)
//   {
//     Rotate(speed);
//     vexDelay(10);
//   }
//   Rotate(0);
// }

// void encoderForward(double speed, double dis) {
//   int a = LA.position(deg);
//   while (fabs(LA.position(deg)-a) < dis)
//   {
//     Forward(speed);
//     vexDelay(10);
//   }
//   Forward(0);
// }