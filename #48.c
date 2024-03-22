//Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.

#include <stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    c=pow(a,b);
    printf("%d raised to the power %d: %d",a,b,c);
    return 0;
}
