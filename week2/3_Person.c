#include<stdio.h>
int main()
{
    char fname1[50];
    char sname1[50];
    char name2[100];
    char name3[100];
    scanf("%s", &fname1);
    scanf("%s", &sname1);
    scanf(" %[^\n]", &name2);
    scanf(" %[^\n]", &name3);
    printf("Person 1: %s %s\n", fname1, sname1);
    printf("Person 2: %s\n", name2);
    printf("Person 3: %s", name3);
    return 0;
}