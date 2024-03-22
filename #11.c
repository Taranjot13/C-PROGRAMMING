//Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.(Without creating temporary variable)

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a:");
    scanf("%i",&a);
    printf("Enter value of b:");
    scanf("%i",&b);
    printf("Interchanged value of a:%i\n",b);
    printf("Interchanged value of b:%i\n",a);
    return 0;
}
