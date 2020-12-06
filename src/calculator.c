
#include "calculator.h"

double sum(double operand1, double operand2)
{
    return operand1 + operand2;
}

double sub(double operand1, double operand2)
{
    return operand1 - operand2;
}

double mul(double operand1, double operand2)
{
    return operand1 * operand2;
}

double squareroot(double value)
 {
    double result;
    result = sqrt(value);
    return result;
 }

double power(double m, double n)
{
     double res;
     res = pow(m,n);
     return res;
}

double logvalue(double value)
{
    double res;
    res = log(value);
    return res;
}

double fahrenheit_to_celsius(double fahrenheit)
{
    double celsius;
    celsius = (fahrenheit - 32)*5/9;
    return celsius;
}
double celsius_to_fahrenheit(double celsius)
{
    double fahrenheit;

    fahrenheit = (1.8 * celsius) + 32;
   return fahrenheit;
}

double celsius_to_kelvin(double celsius)
{
    double kelvin;
    kelvin = celsius+273;
    return kelvin;
}

double kelvin_to_celsius(double kelvin)
{

    double celsius;
    celsius = kelvin-273;
    return celsius;
}
double km_to_m(double km)
{
    double m;
    m = (1000 * km);
    return m;
}
double m_to_cm(double m)
{
    double cm;
    cm = (100 * m);
    return cm;
}
double ft_to_inches(double ft)
{
    double inches;
    inches = (12 * ft);
    return inches;
}
double yard_to_m(double yard)
{
    double m;
    m = (0.9144 * yard);
    return m;
}

int prime_composite(int value)
{
int i, flag=0;
    for (i = 2; i <= value / 2; ++i) {
        if (value % i == 0) {
            flag = 1;
            break;
        }
     }
    if (value == 1)
        printf("1 is neither prime nor composite.");
    else {
        if (flag == 0)
            printf("%d is a prime number.", value);
        else
            printf("%d is a composite number.", value);
    }

    return 0;
}
