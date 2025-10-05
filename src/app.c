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

void test_add_two_numbers(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2,3)); // مثال تست فرضی
}

void setUp(void) {}
void tearDown(void) {}
int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_two_numbers);
    return UNITY_END();
}