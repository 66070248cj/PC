#include<stdio.h>
int main()
{
    double num1;
    double num2;
    double peri;
    scanf("%lf", &num1);
    scanf("%lf", &num2);
    peri = (2*num1)+(2*num2);
    printf("Perimeter of rectangle = %.4lf units", peri);
    return 0;
}