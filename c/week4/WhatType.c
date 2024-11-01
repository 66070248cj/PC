#include<stdio.h>
int main()
{
    char cha;
    scanf("%c", &cha);
    if (cha>=48 && cha<=57)
        printf("number");
    else if (cha>=97 && cha<=122)
        printf("lowercase");
    else if (cha>=65 && cha<=90)
        printf("uppercase");
    else
        printf("error");
    return 0;
}