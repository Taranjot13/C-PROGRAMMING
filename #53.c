//Write a program to print all prime numbers from 1 to 300. (Hint: Use nested loops, break and continue)

#include<stdio.h>
int main()
{
    int i,j;
    printf("Prime numbers between 1 and 300 are:\n");
    for(i=2;i<=300;i++)
        {
            for(j=2;j<=i;j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(i==j){
                printf("%d\n",j);
            }
    }
    return 0;
}
