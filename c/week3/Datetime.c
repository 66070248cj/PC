#include<stdio.h>
int main()
{
    int time;
    int sec;
    int minute;
    int hour;
    int day;
    scanf("%d", &time);

    sec = time;
    minute = sec/60;
    sec = sec%60; //gect sec
    hour = minute/60;
    minute = minute%60; //get min
    day = hour/24;
    hour = hour%24; //get hour

    printf("%d s = %d d %d h %d m %d s", time, day, hour, minute, sec);
    return 0;
}