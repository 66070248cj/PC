#include<stdio.h>
int main()
{
    double num1;
    double num2;
    double num3;
    double num4;
    double sum;
    double ave;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    scanf("%lf", &num3);
    scanf("%lf", &num4);
    sum = num1+num2+num3+num4;
    ave = sum/4;
    printf("Summation is %.2lf\n", sum);
    printf("Average is %.3lf", ave);
    return 0;
}