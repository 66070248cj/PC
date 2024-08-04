#include<stdio.h>
int main()
{
    double price;
    double pc;
    int num;
    double newp;
    int buy2free1;
    double price_pc;
    double price_free;
    scanf("%lf", &price);
    scanf("%lf", &pc);
    scanf("%d", &num);
 
    //use percent
    newp = price*((100.0-pc)/100.0);
    price_pc = newp*num;
 
    //use free
    buy2free1 = num/3;
    buy2free1 = (int) buy2free1;
    num = num%3;
    num = (int) num;
    price_free = (buy2free1*price*2)+(num*price);
 
    if (price_pc<=price_free)
    {
        printf("Discount %.0lf%%\n", pc);
        printf("%.2lf", price_pc);
    }
    else
    {
        printf("Buy 2 Get 1\n");
        printf("%.2lf", price_free);
    }
 
    return 0;
}