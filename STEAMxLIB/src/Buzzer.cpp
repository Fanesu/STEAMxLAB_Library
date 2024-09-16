#include "Arduino.h"
#include "Buzzer.h"

Buzzer::Buzzer() {
  _buzzerState = 0;
    _previousMillis = 0;
}
void Buzzer::begin() {
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, _buzzerState);
}
void Buzzer::buzzerHigh() {
  _buzzerState = 1;
  digitalWrite(BUZZER, _buzzerState);
}
void Buzzer::buzzerLow() {
  _buzzerState = 0;
  digitalWrite(BUZZER, _buzzerState);
}
void Buzzer::toggleBuzzer(unsigned int interval) {
  unsigned long currentMillis = millis();
  if (currentMillis - _previousMillis > interval) {
    _previousMillis = currentMillis;
    _buzzerState = !_buzzerState;
    digitalWrite(BUZZER, _buzzerState);
  }
}