#include "DriverMotor.h"
#include <Wire.h>


motor myMotor;
void setup() {
  myMotor.begin(); //initial myMotor
}
void loop() {
  myMotor.motor1(1, 250);  //(Direction, Speed); Direcction = 0 Motor is CW , Direction = 1 Motor is CCW. Speed from 0 - 255
  myMotor.motor2(1, 250);
  myMotor.motor3(1, 250);
  myMotor.motor4(1, 250);
  delay(3000);

  myMotor.motorStop(1);  //motorStop(Number_Of_Motor); If Number_Of_Motor = 1 Motor is stop, If Number_Of_Motor = 2 Motor 2 is Stop ...
  myMotor.motorStop(2);
  myMotor.motorStop(3);
  myMotor.motorStop(4);
  delay(1000);

  myMotor.motor1(0, 250);  //(Direction, Speed); Direcction = 0 Motor is CW , Direction = 1 Motor is CCW. Speed from 0 - 255
  myMotor.motor2(0, 250);
  myMotor.motor3(0, 250);
  myMotor.motor4(0, 250);
  delay(3000);

  myMotor.motorStopAll();  //motorStopAll
  delay(1000);
}