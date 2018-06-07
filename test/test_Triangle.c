#include "unity.h"
#include "Triangle.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_getTriangleName_given_2_2_5_expects_is_isosceles(void)
{
    char *triangleName = getTriangleName(2, 2, 5);
    
    TEST_ASSERT_EQUAL_STRING("isosceles", triangleName);
}

void test_getTriangleName_given_2_2_minus5_expects_is_not_a_triangle(void)
{
    char *triangleName = getTriangleName(2, 2, -5);
    
    TEST_ASSERT_EQUAL_STRING("is not a triangle", triangleName);
}

void test_getTriangleName_given_2_0_3_expects_is_not_a_triangle(void)
{
    char *triangleName = getTriangleName(2, 0, 3);
    
    TEST_ASSERT_EQUAL_STRING("is not a triangle", triangleName);
}

void test_getTriangleName_given_12_12_12_expects_is_equilateral(void)
{
    char *triangleName = getTriangleName(12, 12, 12);
    
    TEST_ASSERT_EQUAL_STRING("equilateral", triangleName);
}

void test_getTriangleName_given_minus1_minus1_minus1_expects_is_not_a_triangle(void)
{
    char *triangleName = getTriangleName(-1, -1, -1);
    
    TEST_ASSERT_EQUAL_STRING("is not a triangle", triangleName);
}

void test_getTriangleName_given_5_1_8_expects_is_scalene(void)
{
    char *triangleName = getTriangleName(5, 1, 8);
    
    TEST_ASSERT_EQUAL_STRING("scalene", triangleName);
}

void test_getTriangleName_given_minus5_1_minus8_expects_is_not_a_triangle(void)
{
    char *triangleName = getTriangleName(-5, 1, -8);
    
    TEST_ASSERT_EQUAL_STRING("is not a triangle", triangleName);
}

void test_getTriangleName_given_15_60_15_expects_is_isosceles(void)
{
    char *triangleName = getTriangleName(15, 60, 15);
    
    TEST_ASSERT_EQUAL_STRING("isosceles", triangleName);
}

void test_add_2_with_5_expect_7(void){
  int result = add(2,5);
  
//  printf("result = %d",result);
  
  TEST_ASSERT_EQUAL(7, result);
}
  
void test_add_9_with_minus20_expect_minus11(void){
  int result = add(9,-20);  
  
  //  printf("result = %d",result);
  
  TEST_ASSERT_EQUAL(-11, result);
}

