#include "unity.h"
#include "math_utils.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_should_return_sum(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

void test_subtract_should_return_difference(void) {
    TEST_ASSERT_EQUAL_INT(1, subtract(3, 2));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_should_return_sum);
    RUN_TEST(test_subtract_should_return_difference);
    return UNITY_END();
}
