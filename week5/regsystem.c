#include<stdio.h>
int main()
{
    int i;
    int age, height, weight;
    int set1=0; //age>=20 h160+
    int set2=0; // age<20 h<=180 w>=60
    int set3=0; // age>=30 w40-80
    int set4=0; // age<40 w<85 h<=200
    int sum_age=0;
    float sum_h=0;
    float sum_w=0;
    int avg_age;
    float avg_h;
    float avg_w;
    for (i=1; i<=50; i++)
    {
        scanf("%d %d %d", &age, &height, &weight);
        if ((age>=20)&&(height>=160)){
            set1 += 1;
        }
        if ((age<20)&&((height<=180)||(weight>=60)))
        {
            set2 += 1;
        }
        if ((age>=30)&&((weight>=40)&&(weight<=80))){
            set3 += 1;
        }
        if ((age<40)&&((weight<85)||(height<=200))){
            set4 += 1;
        }
        sum_age += age;
        sum_h += height;
        sum_w += weight;
    }
    avg_age = sum_age/50;
    avg_h = sum_h/50;
    avg_w = sum_w/50;
    printf("Age >= 20 and Height >= 160: %d\n", set1);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", set2);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", set3);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", set4);
    printf("Average Age: %d\n", avg_age);
    printf("Average Height: %.2f\n", avg_h);
    printf("Average Weight: %.2f\n", avg_w);
    return 0;
}