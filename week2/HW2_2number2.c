#include<stdio.h>
int main()
{
    int num;
    int num1;
    int num2;
    int num3;
    int num4;
    scanf("%d", &num);
    num1 = num/10000;
    num2 = num/1000;
    num3 = num/100;
    num4 = num/10;
    printf("%-81d", num1);
    printf("%-81d", num2);
    printf("%-81d", num3);
    printf("%-81d", num4);
    printf("%d", num);
    return 0;
}