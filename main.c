#include "calculator.h"
#include<stdio.h>
int choice;
double x,y;
int main()
{
    int opt;
    double n1,n2;
    double res;
    int c;
    int d,s;
    double ip,op;
    int a=0;
    int b=0;
    printf("\nPlease select the required operation to be performed \n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Square Root\n");
    printf("5.Power\n");
    printf("6.log value\n");
    printf("7.Temperature Conversion\n");
    printf("8.Distance Conversion\n");
    printf("9.Prime or Composite\n");

    printf("\nSelect an option below: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
            printf("\nEnter two operands to add:\n");
            scanf("%lf %lf",&n1,&n2);
            res = sum(n1,n2);
            printf("%lf",res);
            break;

        case 2:
            printf("\nEnter two operands to subtract:\n");
            scanf("%lf %lf",&n1,&n2);
            res = sub(n1,n2);
            printf("%lf",res);
            break;

        case 3:
            printf("\nEnter two operands to multiply:\n");
            scanf("%lf %lf",&n1,&n2);
            res = mul(n1,n2);
            printf("%lf",res);
            break;

        case 4:
            printf("\nEnter a number to find it's squareroot:\n");
            scanf("%lf",&ip);
            op =squareroot(ip);
            printf("%lf",op);
            break;

        case 5:
            printf("Enter base number and the power to be raised:\n");
            scanf("%lf %lf",&n1,&n2);
            res=pow(n1,n2);
            printf("%lf\n",res);
            break;
        case 6:
            printf("Enter a number to find its logarithmic value:\n");
            scanf("%lf",&n1);
            res=logvalue(n1);
            printf("%lf",res);
            break;
        case 7:
            temperature_conversion();
            break;
        case 8:
            distance_conversion();
            break;
        case 9:
            printf("Enter a number to find prime or composite:\n");
            scanf("%d", &a);
            prime_composite(a);
            break;

        default :
            printf("Please make a valid choice");

    }
return 0;
}

   void temperature_conversion()
    {
        printf("Make your choice from below:");
        printf("1.fahrenheit to celsius\n");
        printf("2.celsius to fahrenheit\n");
        printf("3.celsius to kelvin\n");
        printf("4.kelvin to celsius\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
             printf("\nEnter temperature value for fahrenheit into celsius conversion:\n");
             scanf("%lf",&x);
             y=fahrenheit_to_celsius(x);
             printf("%lf",y);
             break;

        case 2:
            printf("\nEnter temperature value for celsius into fahrenheit conversion:\n");
            scanf("%lf",&x);
            y=celsius_to_fahrenheit(x);
            printf("%lf",y);
            break;

        case 3:
            printf("\nEnter temperature value for celsius into kelvin conversion:\n");
            scanf("%lf",&x);
            y=celsius_to_kelvin(x);
            printf("%lf",y);
            break;
        case 4:
            printf("\nEnter temperature value for kelvin into celsius");
            scanf("%lf",&x);
            y=kelvin_to_celsius(x);
            printf("%lf",y);
            break;
	default :
            printf("Please make a valid choice");

	}
}

void distance_conversion()
{
printf("Make your choice from below:");
        printf("1.km to m conversion\n");
        printf("2.m to cm conversion\n");
        printf("3.foot to inches conversion\n");
        printf("4.yard to m conversion\n");
        printf("Enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
             printf("\nEnter distance in km to convert into m:\n");
             scanf("%lf",&x);
             y=km_to_m(x);
             printf("%lf",y);
             break;

        case 2:
	    printf("\nEnter distance in m to convert into cm:\n");
            scanf("%lf",&x);
            y=m_to_cm(x);
            printf("%lf",y);
            break;

        case 3:
	    printf("\nEnter distance in ft to convert into inches:\n");
            scanf("%lf",&x);
            y=ft_to_inches(x);
            printf("%lf",y);
            break;
        case 4:
            printf("\nEnter distance in yard to convert into m:\n");
            scanf("%lf",&x);
            y=yard_to_m(x);
            printf("%lf",y);
            break;
	default :
            printf("Please make a valid choice");

	}
}
