#include<stdio.h>
int main()
{
    double num1;
    double num2;
    double ans1;
    double ans2;
    double ans3;
    double ans4;
    scanf("%lf,%lf", &num1, &num2);
    ans1 = num1+num2;
    ans2 = num1-num2;
    ans3 = num1*num2;
    ans4 = num1/num2;
    printf("The sum of the given numbers : %lf\n", ans1);
    printf("The difference of the given numbers : %lf\n", ans2);
    printf("The product of the given numbers : %lf\n", ans3);
    printf("The quotient of the given numbers : %lf\n", ans4);
    return 0;
}