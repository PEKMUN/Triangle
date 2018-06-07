/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_getTriangleName_given_2_2_5_expects_is_isosceles(void);
extern void test_getTriangleName_given_2_2_minus5_expects_is_not_a_triangle(void);
extern void test_getTriangleName_given_2_0_3_expects_is_not_a_triangle(void);
extern void test_getTriangleName_given_12_12_12_expects_is_equilateral(void);
extern void test_getTriangleName_given_minus1_minus1_minus1_expects_is_not_a_triangle(void);
extern void test_getTriangleName_given_5_1_8_expects_is_scalene(void);
extern void test_getTriangleName_given_minus5_1_minus8_expects_is_not_a_triangle(void);
extern void test_getTriangleName_given_15_60_15_expects_is_isosceles(void);
extern void test_add_2_with_5_expect_7(void);
extern void test_add_9_with_minus20_expect_minus11(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_Triangle.c");
  RUN_TEST(test_getTriangleName_given_2_2_5_expects_is_isosceles, 12);
  RUN_TEST(test_getTriangleName_given_2_2_minus5_expects_is_not_a_triangle, 19);
  RUN_TEST(test_getTriangleName_given_2_0_3_expects_is_not_a_triangle, 26);
  RUN_TEST(test_getTriangleName_given_12_12_12_expects_is_equilateral, 33);
  RUN_TEST(test_getTriangleName_given_minus1_minus1_minus1_expects_is_not_a_triangle, 40);
  RUN_TEST(test_getTriangleName_given_5_1_8_expects_is_scalene, 47);
  RUN_TEST(test_getTriangleName_given_minus5_1_minus8_expects_is_not_a_triangle, 54);
  RUN_TEST(test_getTriangleName_given_15_60_15_expects_is_isosceles, 61);
  RUN_TEST(test_add_2_with_5_expect_7, 68);
  RUN_TEST(test_add_9_with_minus20_expect_minus11, 76);

  return (UnityEnd());
}