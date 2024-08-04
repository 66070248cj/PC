#include<stdio.h>
int main()
{
    int m;
    int n;
    int i;
    scanf("%d", &m);
    scanf("%d", &n);
    if (m>n){
        for (i=m; i>n-1; i--)
        {
            printf("%d ", i);
        }
    }
    else{
        for (i=m; i<n+1; i++)
        {
            printf("%d ", i);
        }
    }
    return 0;
}