//Population of a town today is 100000. The population has increased steadily at the rate of 10 % per year for last 10 years. Write a program to determine the population at the end of each year in the last decade.

#include<stdio.h>
#include<math.h>
int main()
{
    int i;
    float pop=100000;
    for(i=1;i<=10;i++)
    {
        pop = pop - pop*0.1; 
        printf("%d year: %d\n",i, (int)pop);
    }
    return 0;
}
