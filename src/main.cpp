#include "Arduino.h"

#include "../lib/FlexCAN_T4/CanBus/CanBus.h"

CanBus<CAN0> &canbus = CanBus<CAN0>::getInstance();

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
  canbus.begin(1000000);
}

void loop() {
  digitalWrite(ledPin, !digitalRead(ledPin));

  delay(1);
}
