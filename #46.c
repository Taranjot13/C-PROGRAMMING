//Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.

#include <stdio.h>
int main()
{
    int j=1,i,o;
    while(j<=10){
        printf("Enter total hours of work of employee %d: ",j);
        scanf("%i",&i);
        if(i>40){
            o=i-40;
            printf("Overtime pay of employee %d is %d.\n",j,o*12);
        }
        else{
            printf("No Overtime pay of employee");
        }
        j++;
    }
    return 0;
}
