#include "unity.h"
#include "mock_hal_gpio.h"
#include "app.h"

void setUp(void) {}
void tearDown(void) {}

void test_led_on_should_call_HAL_GPIO_WritePin(void)
{
    mock_writepin_called = 0;
    mock_last_value = 0;

    led_on(); // از app.c فراخوانی میشه

    TEST_ASSERT_EQUAL_INT(1, mock_writepin_called);
    TEST_ASSERT_EQUAL_INT(1, mock_last_value);
}
