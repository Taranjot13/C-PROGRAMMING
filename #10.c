//Two numbers are input through the keyboard into two locations C and D. Write a program to interchange the contents of C and D.
#include<stdio.h>
int main()
{
    int C,D;
    printf("Enter C: ");
    scanf("%d", &C);
    printf("Enter D: ");
    scanf("%d", &D);
    printf("Value of C is %d.\n",C);
    printf("Value of D is %d.\n",D);
    int t;
    t=C;
    C=D;
    D=t;
    printf("Interchanged value of C is %d.\n",C);
    printf("Interchanged value of D is %d.\n",D);
    return 0;
}
