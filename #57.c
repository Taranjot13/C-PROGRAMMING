//The natural logarithm can be approximated by the following series. If x is input through the keyboard, write a program to calculate the sum of first seven terms of this series.

#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float x,d,p,q,sum=0;
    printf("Enter x: ");
    scanf("%f", &x);
    d=(x-1)/x;
    for(i=2;i<=7;i++)
    {
        p=pow(d,i);
        q=p/2;
        sum=sum+q;
    }
    sum=d+sum;
    printf("Result: %.2f",sum);
    return 0;
}
