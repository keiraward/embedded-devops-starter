#include "unity.h"
#include "app.h"

void setUp(void) {}
void tearDown(void) {}

void test_is_even(void) {
    TEST_ASSERT_TRUE(is_even(2));
    TEST_ASSERT_TRUE(is_even(0));
    TEST_ASSERT_FALSE(is_even(3));
    TEST_ASSERT_FALSE(is_even(-5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_is_even);
    return UNITY_END();
}
