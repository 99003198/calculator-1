#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double sum(double operand1, double operand2);
double sub(double operand1, double operand2);
double mul(double operand1, double operand2);
double squareroot(double value);
double power(double m, double n);
double logvalue(double value);
double fahrenheit_to_celsius(double fahrenheit);
double celsius_to_fahrenheit(double celsius);
double celsius_to_kelvin(double celsius);
double kelvin_to_celsius(double kelvin);
double km_to_m(double km);
double m_to_cm(double m);
double ft_to_inches(double ft);
double yard_to_m(double yard);
int prime_composite(int value);

#endif
