#include<stdio.h>
int main()
{
    double price;
    double dis;
    int num;
    double total;
    double new_price;
    scanf("%lf", &price);
    scanf("%lf", &dis);
    scanf("%d", &num);
    new_price = price-(price*(dis/100));
    total = new_price*num;
    printf("%.2lf", total);
    return 0;
}