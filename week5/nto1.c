#include<stdio.h>
int main()
{
    int i;
    //int n;
    scanf("%d", &i);
    do {
        printf("%d ", i);
        i--;
    } while (i>0);
    return 0;
}