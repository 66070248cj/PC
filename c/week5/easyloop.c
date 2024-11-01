#include<stdio.h>
int main()
{
    int num;
    int i;
    scanf("%d", &num);
    if (num>0){
        for(i=num; i>=0; i--){
            printf("%d ", i);
        }
    }
    else{
        for(i=num; i<=0; i++){
            printf("%d ", i);
        }
    }

    return 0;
}