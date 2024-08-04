#include<stdio.h>
int main()
{
    int n, row, col;
    int i = 0;
    scanf("%d", &n);
    for (row=1; row<=n; row++)
    {
        for (col=1; col<=n; col++)
        {
            if ((row==col)||((row+col)==(n+1)))
            {
                printf("-");
            }
            else
            {
                printf("#");
            }
 
        }
        i ++;
        printf("\n");
    }
 
 
    return 0;
}