/**
 * @file test_calculator.c
 * @author prajwal allitti (you@domain.com)
 * @brief Unit testing
 * @version 0.1
 * @date 2022-02-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"unity.h"
#include"header.h"

void setUp()
{

}
void tearDown()
{

}

void test_add(void)
{
    float a=20 ,b=10;
    TEST_ASSERT_EQUAL(30,add(a,b));
}
void test_sub(void)
{
    float a=20 ,b=10;
    TEST_ASSERT_EQUAL(10,sub(a,b));
}
int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    return UNITY_END();
}