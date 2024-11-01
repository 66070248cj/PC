#include<stdio.h>
int main()
{
    char fname[50];
    char sname[50];
    char id[8];
    int day;
    int month;
    int year;
    float gpa;

    scanf("%s", fname);
    scanf("%s", sname);
    scanf("%s", id);
    scanf("%d/%d/%d", &day, &month, &year);
    scanf("%f", &gpa);

    printf("Fullname: %s %s\n", fname, sname);
    printf("ID: %s\n", id);
    printf("DOB: %02d-%02d-%04d\n", day, month, year);
    printf("GPA: %0.2f", gpa);
    return 0;
}