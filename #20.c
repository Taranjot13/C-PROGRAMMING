//Write a program to find the absolute value of a number entered through the keyboard.

#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter number : ");
    scanf("%i",&x);
    y=x;
    if(y<0){
        y=(-1)*y;
        }
    printf("The absolute value of %i is %i.",x,y);
    return 0;
}
