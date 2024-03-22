//Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
#include <stdio.h>
int main()
{
    float a,b,c;
    int d;
    printf("Enter a: ");
    scanf("%f",&a);
    b=(0.4*a);
    c=(0.2*a);
    d=a+b+c;
    printf("The gross salary is %d\n",d);
    return 0;
}
