#include<stdio.h>
int main()
{
    char txt[3];
    scanf("%3s", &txt);
    printf("*****\n");
    printf("*-*-*\n");
    printf("*%s*\n", &txt);
    printf("*-*-*\n");
    printf("*****");
    return 0;
}