//Given the length and breadth of a rectangle, write a program to find whether the area of the rectangle is greater than its perimeter. For example, the area of the rectangle with length = 5 and breadth = 4 is greater than its perimeter.

#include<stdio.h>
int main()
{
    int l,b;
    printf("Enter length:");scanf("%i",&l);
    printf("Enter breadth:");scanf("%i",&b);
    int area=(l*b);
    int peri=(2*(l+b));
    printf("Area of rectangle is %i.\n",area);
    printf("Perimeter of rectangle is %i.\n",peri);
    if(area<peri){
        printf("The area of rectangle is smaller than it's perimeter.\n");
    }
    if(area>peri){
        printf("The area of rectangle is greater than it's perimeter.\n");
    }
    return 0;
}
