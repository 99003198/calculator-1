#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

#include "calculator.h"
#define PROJECT_NAME "calculator"

void test_sum(void);
void test_sub(void);
void test_mul(void);
void test_squareroot(void);
void test_fahrenheit_to_celsius(void);
void test_celsius_to_fahrenheit(void);
void test_celsius_to_kelvin(void);
void test_kelvin_to_celsius(void);
void test_logvalue(void);
void test_power(void);
void test_prime_composite(void);
void test_km_to_m(void);
void test_m_to_cm(void);
void test_ft_to_inches(void);
void test_yard_to_m(void);


int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */

  CU_add_test(suite, "TEST_SUM", test_sum);
  CU_add_test(suite, "TEST_SUB", test_sub);
  CU_add_test(suite, "TEST_MUL", test_mul;
  CU_add_test(suite, "TEST_SQUAREROOT", test_squareroot);
  CU_add_test(suite, "TEST_FAHRENHEIT_TO_CELSIUS", test_fahrenheit_to_celsius);
  CU_add_test(suite, "TEST_CELSIUS_TO_FAHRENHEIT", test_celsius_to_fahrenheit);
  CU_add_test(suite, "TEST_CELSIUS_TO_KELVIN", test_celsius_to_kelvin);
  CU_add_test(suite, "TEST_KELVIN_TO_CELSIUS", test_kelvin_to_celsius);
  CU_add_test(suite, "TEST_LOGVALUE", test_logvalue);
  CU_add_test(suite, "TEST_POWER", test_power);
  CU_add_test(suite, "TEST_PRME_COMPOSITE", test_prime_composite);
  CU_add_test(suite, "TEST_KM_TO_M", test_km_to_m);
  CU_add_test(suite, "TEST_M_TO_CM", test_m_to_cm);
  CU_add_test(suite, "TEST_FT_TO_INCHES", test_ft_to_inches);
  CU_add_test(suite, "TEST_YARD_TO_M", test_yard_to_m);
/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);

  /* run the unit test framework*/
  CU_basic_run_tests();

  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}


void test_sum(void) {
  CU_ASSERT_EQUAL(74.000, sum(51,23));
  CU_ASSERT_EQUAL(30.00, sum(17,13));
  CU_ASSERT_EQUAL(570.00, sum(450,120));
}

void test_sub(void) {
  CU_ASSERT_EQUAL(4.00,sub(15,11));
  CU_ASSERT_EQUAL(4.00, sub(7,3));
  CU_ASSERT_EQUAL(100.00, sub(150,50));
}

void test_mul(void) {
  CU_ASSERT_EQUAL(16.00, mul(8,2));
  CU_ASSERT_EQUAL(18.00, mul(6,3));
  CU_ASSERT_EQUAL(50.00, mul(5,10));
}

void test_squareroot(void) {
  CU_ASSERT_EQUAL(15.00, squareroot(225));
  CU_ASSERT_EQUAL(11.00, squareroot(121));
  CU_ASSERT_EQUAL(10.00, squareroot(100));
}
void test_fahrenheit_to_celsius(void)
{
  CU_ASSERT_DOUBLE_EQUAL(37.7778,fahrenheit_to_celsius(100),3);
  CU_ASSERT_DOUBLE_EQUAL(23.8889,fahrenheit_to_celsius(75),3);
  CU_ASSERT_DOUBLE_EQUAL(43.3333,fahrenheit_to_celsius(110),3);
}
void test_celsius_to_fahrenheit(void)
{
  CU_ASSERT_DOUBLE_EQUAL(93.2,celsius_to_fahrenheit(34),3);
  CU_ASSERT_DOUBLE_EQUAL(170.6,celsius_to_fahrenheit(77),3);
  CU_ASSERT_DOUBLE_EQUAL(127.4,celsius_to_fahrenheit(53),3);
}
void test_celsius_to_kelvin(void)
{
  CU_ASSERT_DOUBLE_EQUAL(318.15,celsius_to_kelvin(45),3);
  CU_ASSERT_DOUBLE_EQUAL(309.15,celsius_to_kelvin(36),3);
  CU_ASSERT_DOUBLE_EQUAL(289.15,celsius_to_kelvin(16),3);
}
void test_kelvin_to_celsius(void)
{
  CU_ASSERT_DOUBLE_EQUAL(45,kelvin_to_celsius(318.15),3);
  CU_ASSERT_DOUBLE_EQUAL(36,kelvin_to_celsius(309.15),3);
  CU_ASSERT_DOUBLE_EQUAL(16,kelvin_to_celsius(289.15),3);
}
void test_power(void)
{
  CU_ASSERT_EQUAL(25, power(5,2));
  CU_ASSERT_EQUAL(343, power(7,3));
  CU_ASSERT_EQUAL(125000, power(50,3));
}
void test_prime_composite(void)
{
  CU_ASSERT_EQUAL(0, prime_composite(2));
  CU_ASSERT_NOT_EQUAL(1, prime_composite(49));
}
void test_logvalue(void) {
  CU_ASSERT_DOUBLE_EQUAL(3.2188, logvalue(25),0.5);
  CU_ASSERT_DOUBLE_EQUAL(3.891, logvalue(49),0.5);
  CU_ASSERT_DOUBLE_EQUAL(4.6051, logvalue(100),0.5);
}

void test_km_to_m(void)
{
  CU_ASSERT_DOUBLE_EQUAL(5000.0000,km_to_m(5),3);
  CU_ASSERT_DOUBLE_EQUAL(2000.0000,km_to_m(2),3);
} 
void test_m_to_cm(void)
{
  CU_ASSERT_DOUBLE_EQUAL(250.0000,m_to_cm(2.5),3);
  CU_ASSERT_DOUBLE_EQUAL(480.0000,m_to_cm(4.8),3);
}
void test_ft_to_inches(void)
{
  CU_ASSERT_DOUBLE_EQUAL(60.0000,ft_to_inches(5),3);
  CU_ASSERT_DOUBLE_EQUAL(33.6000,ft_to_inches(2.8),3);
}
void test_yard_to_m(void)
{
  CU_ASSERT_DOUBLE_EQUAL(4.5720,yard_to_m(5),3);
  CU_ASSERT_DOUBLE_EQUAL(7.3152,yard_to_m(8),3);
}
