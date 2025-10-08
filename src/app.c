#include "app.h"
#include <stdio.h>
#include "app.h"

#ifdef UNIT_TEST
#include "mock_hal_gpio.h"
#else
#include "hal_gpio.h"  
#endif

void led_on(void)
{
    HAL_GPIO_WritePin(0, 13, 1);
}
void app_init(void) {
    printf("app_init called\n");
}

int add(int a, int b) {
    return a + b;
}
