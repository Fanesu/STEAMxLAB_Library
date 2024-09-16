#include "Arduino.h"
#include "DriverMotor.h"
#include "PCA9557.h"
#include "Wire.h"

PCA9557 io(0x18, &Wire);

motor::motor() {
}
void motor::begin() {
  Wire.begin();
  io.pinMode(INA_M1, OUTPUT);  //Motor 1
  io.pinMode(INB_M1, OUTPUT);
  pinMode(PWM_M1, OUTPUT);

  io.pinMode(INA_M2, OUTPUT);  //Motor 2
  io.pinMode(INB_M2, OUTPUT);
  pinMode(PWM_M2, OUTPUT);

  io.pinMode(INA_M3, OUTPUT);  //Motor 3
  io.pinMode(INB_M3, OUTPUT);
  pinMode(PWM_M3, OUTPUT);

  io.pinMode(INA_M4, OUTPUT);  //Motor 4
  io.pinMode(INB_M4, OUTPUT);
  pinMode(PWM_M4, OUTPUT);
}

void motor::motor1(bool direction, int speed) {
  if (direction == 0) {
    io.digitalWrite(INA_M1, 1);
    io.digitalWrite(INB_M1, 0);
    analogWrite(PWM_M1, speed);
  } else {
    io.digitalWrite(INA_M1, 0);
    io.digitalWrite(INB_M1, 1);
    analogWrite(PWM_M1, speed);
  }
}

void motor::motor2(bool direction, int speed) {
  if (direction == 0) {
    io.digitalWrite(INA_M2, 1);
    io.digitalWrite(INB_M2, 0);
    analogWrite(PWM_M2, speed);
  } else {
    io.digitalWrite(INA_M2, 0);
    io.digitalWrite(INB_M2, 1);
    analogWrite(PWM_M2, speed);
  }
}

void motor::motor3(bool direction, int speed) {
  if (direction == 0) {
    io.digitalWrite(INA_M3, 1);
    io.digitalWrite(INB_M3, 0);
    analogWrite(PWM_M3, speed);
  } else {
    io.digitalWrite(INA_M3, 0);
    io.digitalWrite(INB_M3, 1);
    analogWrite(PWM_M3, speed);
  }
}

void motor::motor4(bool direction, int speed) {
  if (direction == 0) {
    io.digitalWrite(INA_M4, 1);
    io.digitalWrite(INB_M4, 0);
    analogWrite(PWM_M4, speed);
  } else {
    io.digitalWrite(INA_M4, 0);
    io.digitalWrite(INB_M4, 1);
    analogWrite(PWM_M4, speed);
  }
}

void motor::motorStop(int motorNum) {
  if (motorNum == 1) {
    io.digitalWrite(INA_M1, 0);
    io.digitalWrite(INB_M1, 0);
    analogWrite(PWM_M1, 0);
  } else if (motorNum == 2) {
    io.digitalWrite(INA_M2, 0);
    io.digitalWrite(INB_M2, 0);
    analogWrite(PWM_M2, 0);
  } else if (motorNum == 3) {
    io.digitalWrite(INA_M3, 0);
    io.digitalWrite(INB_M3, 0);
    analogWrite(PWM_M3, 0);
  } else if (motorNum == 4) {
    io.digitalWrite(INA_M4, 0);
    io.digitalWrite(INB_M4, 0);
    analogWrite(PWM_M4, 0);
  }
}
void motor::motorStopAll() {
  io.digitalWrite(INA_M1, 0);
  io.digitalWrite(INB_M1, 0);
  analogWrite(PWM_M1, 0);

  io.digitalWrite(INA_M2, 0);
  io.digitalWrite(INB_M2, 0);
  analogWrite(PWM_M2, 0);

  io.digitalWrite(INA_M3, 0);
  io.digitalWrite(INB_M3, 0);
  analogWrite(PWM_M3, 0);

  io.digitalWrite(INA_M4, 0);
  io.digitalWrite(INB_M4, 0);
  analogWrite(PWM_M4, 0);
}