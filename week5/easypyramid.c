#include<stdio.h>
int main()
{
    int num, row, col, space;
    scanf("%d", &num);

    for(row=1; row<=num; row++){
        //Print spaces
        for(space=1; space<=num-row; space++) {
            printf(" ");
        }
        //Print *
        for(col=1; col<=2*row-1; col++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}