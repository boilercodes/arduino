/*
 * This is a generated example file that is supposed to be modified.
 */

#include <Arduino.h>
#include <unity.h>

#include "config.h"

// void setUp(void) {
// // set stuff up here
// }

// void tearDown(void) {
// // clean stuff up here
// }

void test_led_builtin_pin_number()
{
    TEST_ASSERT_EQUAL(LED_BUILTIN, 13);
}

void test_led_state_high()
{
    digitalWrite(LED_BUILTIN, HIGH);
    TEST_ASSERT_EQUAL(digitalRead(LED_BUILTIN), HIGH);
}

void test_led_state_low()
{
    digitalWrite(LED_BUILTIN, LOW);
    TEST_ASSERT_EQUAL(digitalRead(LED_BUILTIN), LOW);
}

void setup()
{
    // NOTE!!! Wait for >2 secs
    // if board doesn't support software reset via Serial.DTR/RTS
    delay(2000);

    UNITY_BEGIN(); // IMPORTANT LINE!
    RUN_TEST(test_led_builtin_pin_number);

    pinMode(LED_BUILTIN, OUTPUT);
}

int i = 0;

void loop()
{
    if (i < Config::max_blinks)
    {
        RUN_TEST(test_led_state_high);
        delay(Config::delay);
        RUN_TEST(test_led_state_low);
        delay(Config::delay);
        i++;
    }
    else if (i == Config::max_blinks)
    {
        UNITY_END(); // stop unit testing
    }
}
