#include <Arduino.h>

void spamHello() {
  Serial.println("hello");
  delay(1000);  // 1 second delay
}

void setup() {
  // Initialize serial communication at 115200 baud
  Serial.begin(115200);
}

void loop() {
  spamHello();
}