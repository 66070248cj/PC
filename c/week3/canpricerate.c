#include<stdio.h>
int main()
{
    double price;
    double dia;
    double height;
    double volume;
    double b_per_ml;
    double radius;
 
    scanf("%lf", &price); //price
    scanf("%lf", &dia); //dia
    scanf("%lf", &height); //height
    radius = dia/2;
    volume = height*3.14159265359*(radius*radius);
    b_per_ml = price/volume;
    printf("Volume : %.2lfml\n", volume);
    printf("Baht/ml : %.4lf", b_per_ml);
    return 0;
}