#include <math.h>
#include<stdio.h>
int main()
{
    double num1;
    double num2;
    double num3;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    num3 = sqrt(pow(num1, 2)+pow(num2, 2));
    printf("%.2lf", num3);
    return 0;
}