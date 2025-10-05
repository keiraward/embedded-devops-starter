#include "unity.h"
#include "app.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_two_numbers(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
    TEST_ASSERT_EQUAL_INT(0, add(-1, 1));
}

void test_subtract_two_numbers(void) {
    TEST_ASSERT_EQUAL_INT(1, subtract(4, 3));
    TEST_ASSERT_EQUAL_INT(-3, subtract(2, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_two_numbers);
    RUN_TEST(test_subtract_two_numbers);
    return UNITY_END();
}
