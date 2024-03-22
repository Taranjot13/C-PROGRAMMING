//If lengths of three sides of a triangle are input through the keyboard, write a program to find the area of the triangle.
#include <stdio.h>
# include <math.h>
int main()
{
    int a,b,c;
    printf("Enter three sides:");
    scanf("%i %i %i",&a,&b,&c);
    float s=((a+b+c)/2);
    int ar;
    ar=(s*(s-a)*(s-b)*(s-c));
    float area;
    area=sqrt(ar);
    printf("The area of triangle is:%.2f\n",area);
    return 0;
}
