#include "unity.h"
#include "app.h"

void setUp(void) {}
void tearDown(void) {}

void test_add_two_positive_numbers(void) {
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

void test_add_negative_and_positive(void) {
    TEST_ASSERT_EQUAL_INT(0, add(-1, 1));
}

void test_add_two_negative_numbers(void) {
    TEST_ASSERT_EQUAL_INT(-7, add(-3, -4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add_two_positive_numbers);
    RUN_TEST(test_add_negative_and_positive);
    RUN_TEST(test_add_two_negative_numbers);
    return UNITY_END();
}
