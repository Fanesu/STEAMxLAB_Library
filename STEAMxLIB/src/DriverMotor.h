#ifndef DriverMotor_h
#define DriverMotor_h
#include "Arduino.h"

class motor {
public:
  motor();
  void begin();
  void motor1(bool direction, int speed);
  void motor2(bool direction, int speed);
  void motor3(bool direction, int speed);
  void motor4(bool direction, int speed);
  void motorStop(int motorNum);
  void motorStopAll();
// private:
};

#endif