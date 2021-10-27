#include "config.h"
#include <Arduino.h>

void setup()
{
    // Set the LED state.
    pinMode(LED_BUILTIN, OUTPUT);
}

int i = 0;

void loop()
{
    if (i < Config::max_blinks)
    {
        // Turn on the LED.
        digitalWrite(LED_BUILTIN, HIGH);
        delay(Config::delay);

        // Turn off the LED.
        digitalWrite(LED_BUILTIN, LOW);
        delay(Config::delay);
        i++;
    }
    else if (i == Config::max_blinks)
    {
        for (int j = 0; j < Config::max_blinks; j++)
        {
            // Turn on the LED.
            digitalWrite(LED_BUILTIN, HIGH);
            delay(Config::delay / 10);

            // Turn off the LED.
            digitalWrite(LED_BUILTIN, LOW);
            delay(Config::delay / 10);
        }

        exit(0);
    }
}
