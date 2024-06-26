// Write a recursive function to obtain the running sum of first 25 natural numbers.

#include<stdio.h>
int sum(int num);
int rec_sum(int num);
void main()
{
    int n;

    printf("Enter Range: ");
    scanf("%d", &n);
    printf("\nNon-Recursive: Sum of first %d numbers is: %d",n, sum(n));
    printf("\nRecursive: Sum of first %d numbers is: %d",n, rec_sum(n));
}
// This function is for non recursion
int sum(int num)
{
    int res=0;
    while(num) //we can write this condition as while(num!=0) both are same
    {
        res = res + num;
        num = num-1;
    }
    return res;
}

int rec_sum(int num)
{
    while(num)
    {
        return (num+sum(num-1));
    }
}
