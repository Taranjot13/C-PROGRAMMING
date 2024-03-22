//The distance between two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches and centi-meters.
#include <stdio.h>
int main()
{
    int d;
    printf("Enter kilometers : ");
    scanf("%i",&d);
    float m,f,i,c;
    m=(d*1000);
    f=(m*3.3);
    i=(f*12);
    c=(m*100);
    printf("Distance in Kilometers is :%i\n",d);
    printf("Distance in meters : %.2f\n",m);
    printf("Distance in feet : %.2f\n",f);
    printf("Distance in inches : %.2f\n",i);
    printf("Distance in centimeters : %.2f\n",c);
    return 0;
}
