#include "build/temp/_test_Triangle.c"
#include "Triangle.h"
#include "unity.h"


void setUp(void)

{

}



void tearDown(void)

{

}



void test_getTriangleName_given_2_2_5_expects_is_isosceles(void)

{

    char *triangleName = getTriangleName(2, 2, 5);



    UnityAssertEqualString((const char*)(("isosceles")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(16));

}



void test_getTriangleName_given_2_2_minus5_expects_is_not_a_triangle(void)

{

    char *triangleName = getTriangleName(2, 2, -5);



    UnityAssertEqualString((const char*)(("is not a triangle")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(23));

}



void test_getTriangleName_given_2_0_3_expects_is_not_a_triangle(void)

{

    char *triangleName = getTriangleName(2, 0, 3);



    UnityAssertEqualString((const char*)(("is not a triangle")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(30));

}



void test_getTriangleName_given_12_12_12_expects_is_equilateral(void)

{

    char *triangleName = getTriangleName(12, 12, 12);



    UnityAssertEqualString((const char*)(("equilateral")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(37));

}



void test_getTriangleName_given_minus1_minus1_minus1_expects_is_not_a_triangle(void)

{

    char *triangleName = getTriangleName(-1, -1, -1);



    UnityAssertEqualString((const char*)(("is not a triangle")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(44));

}



void test_getTriangleName_given_5_1_8_expects_is_scalene(void)

{

    char *triangleName = getTriangleName(5, 1, 8);



    UnityAssertEqualString((const char*)(("scalene")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(51));

}



void test_getTriangleName_given_minus5_1_minus8_expects_is_not_a_triangle(void)

{

    char *triangleName = getTriangleName(-5, 1, -8);



    UnityAssertEqualString((const char*)(("is not a triangle")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(58));

}



void test_getTriangleName_given_15_60_15_expects_is_isosceles(void)

{

    char *triangleName = getTriangleName(15, 60, 15);



    UnityAssertEqualString((const char*)(("isosceles")), (const char*)((triangleName)), (

   ((void *)0)

   ), (UNITY_UINT)(65));

}



void test_add_2_with_5_expect_7(void){

  int result = add(2,5);







  UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(73), UNITY_DISPLAY_STYLE_INT);

}



void test_add_9_with_minus20_expect_minus11(void){

  int result = add(9,-20);







  UnityAssertEqualNumber((UNITY_INT)((-11)), (UNITY_INT)((result)), (

 ((void *)0)

 ), (UNITY_UINT)(81), UNITY_DISPLAY_STYLE_INT);

}
