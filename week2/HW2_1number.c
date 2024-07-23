#include<stdio.h>
int main()
{
    int num;
    int lang;
    int nha;
    scanf("%d", &num);
    lang = num%1000;
    nha = num-lang;
    nha = nha/1000;
    printf("%d%d", lang, nha);
    return 0;
}