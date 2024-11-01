#include<stdio.h>
#include<ctype.h>
int main()
{
    char cha;
    scanf("%c", &cha);
    if (isdigit(cha))
        printf("number");
    else if (islower(cha))
        printf("lowercase");
    else if (isupper(cha))
        printf("uppercase");
    else
        printf("error");
    return 0;
}