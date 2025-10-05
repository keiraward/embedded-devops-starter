#include "app.h"
#include <stdio.h>   // این خط لازم بود

void app_init(void) {
    printf("app_init called\n");
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int is_even(int n) {
    return (n % 2 == 0);
}