#include <Arduino.h>

#define ledPin 16

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, LOW);
  Serial.println("LED is ON!!!");
  delay(1000);

  digitalWrite(ledPin, HIGH);
  Serial.println("LED is OFF!!!");
  delay(1000);
}