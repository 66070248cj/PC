#include<stdio.h>
int main()
{
    double a;
    double b;
    double c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    if (a+b>c)
        if (a+c>b)
            if (b+c>a)
                printf("Triangle is valid.");
            else
                printf("Triangle is not valid.");
        else
            printf("Triangle is not valid.");
    else
        printf("Triangle is not valid.");
    return 0;
}