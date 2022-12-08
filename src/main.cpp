/*
 * This is a generated example file that is supposed to be modified.
 */

#include <Arduino.h>

#include "config.h"

void setup() {
  // Set the LED state.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Turn on the LED.
  digitalWrite(LED_BUILTIN, HIGH);
  delay(Config::delay);

  // Turn off the LED.
  digitalWrite(LED_BUILTIN, LOW);
  delay(Config::delay);
}
