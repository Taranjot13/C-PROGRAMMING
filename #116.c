/*
Write a recursive function to obtain the first 25 numbers of a
Fibonacci sequence. In a Fibonacci sequence the sum of two
successive terms gives the third term. Following are the first few
terms of the Fibonacci sequence:
1 1 2 3 5 8 13 21 34 55 89...
*/

#include<stdio.h>
int fibo(int num);
void main()
{
    int num,c=0,i;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Fibonacci Series:\n");
    for(i=1;i<=num;i++)
    {
        printf("%d\n", fibo(c));
        c++;
    }
}
int fibo(int num)
{
    if(num==0)
    {
        return 0;
    }

    else if(num==1)
    {
        return 1;
    }
    else
    {
        return (fibo(num-1)+fibo(num-2));
    }
}
