#include <Arduino.h>

void setup()
{
    // Set the LED state.
    pinMode(LED_BUILTIN, OUTPUT);
}

int i = 0;
int max_blinks = 10;

void loop()
{
    if (i < max_blinks)
    {
        // Turn on the LED.
        digitalWrite(LED_BUILTIN, HIGH);
        delay(500);

        // Turn off the LED.
        digitalWrite(LED_BUILTIN, LOW);
        delay(500);
        i++;
    }
    else if (i == max_blinks)
    {
        exit(0);
    }
}
