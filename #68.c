//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, x;

    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    //second method using <math.h>
    //c = pow(a,b);
    c = 1;
    x = b;
    while(b!=0)
    {
        c = c * a;
        b = b - 1;
    }
    printf("%d raised to the power %d: %d",a,x,c);
}
