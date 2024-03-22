//The length and breadth of a rectangle and radius of a circle are input through the keyboard. Write a program to calculate the area and perimeter of the rectangle, and the area and circumference of the circle.
#include <stdio.h>
int main()
{
    float l,b,r;
    printf("Enter ");
    scanf("%f %f %f",&l,&b,&r);
    float ar;
    float pr;
    float ac;
    float pc;
    ar=l*b;
    printf("Area of rectangle : %.2f\n",ar);
    pr=2*(l+b);
    printf("Perimeter of rectangle: %.2f\n",pr);
    ac=3.14*r*r;
    printf("Area of circle : %.2f\n",ac);
    pc=2*3.14*r;
    printf("Perimeter of circle : %.2f\n",pc);
    return 0;
}
