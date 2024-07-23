#include<stdio.h>
int main()
{
    char cha1;
    char cha2;
    char cha3;
    char cha4;
    char cha5;

    scanf("%c", &cha1);
    scanf(" %c", &cha2);
    scanf(" %c", &cha3);
    scanf(" %c", &cha4);
    scanf(" %c", &cha5);

    printf("%c\n", cha1+1);
    printf("%c\n", cha2);
    printf("%c\n", cha3+1);
    printf("%c\n", cha4);
    printf("%c", cha5+1);
    return 0;
}