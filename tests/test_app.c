#include "unity.h"
#include "app.h"
void setUp(void) {}
void tearDown(void) {}
void test_add_two_numbers(void)
{
    TEST_ASSERT_EQUAL_INT(5, add(2, 3));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add_two_numbers);
    return UNITY_END();
}
