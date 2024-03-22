//Write a program to print the multiplication table of the numbe entered by the user.

#include<stdio.h>
int main()
{
    int i,num;
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}
