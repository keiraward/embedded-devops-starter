#include "app.h"
#include <stdio.h>

void app_init(void) {
    printf("app_init called\n");
}

int add(int a, int b) {
    return a + b;
}
