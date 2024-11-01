#include<stdio.h>
int main()
{
    int i;
    int sum;
    while (i!=-9){
        scanf("%d", &i);
        if (i!=-9)
        {
            sum += i;
        }
    }
    printf("%d", sum);
    return 0;
}