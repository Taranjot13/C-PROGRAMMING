//write a program using for loop to calculate the value of an investment given the initial value of investment and the annual interest .Calculate the value of investment over the period of a time.

#include<stdio.h>
#include<math.h>
int main()
{
    double i,r,v;
    int t,y;
    printf("ENTER THE INVESTMENT VALUE: ");
    scanf("%lf",&i);
    printf("ENTER THE RATE OF INTEREST: ");
    scanf("%lf",&r);
    printf("ENTER THE NUMBER OF YEARS: ");
     scanf("%i",&t);
    printf("YEAR \t VALUE\n");
    for(y=1;y<=t;++y){
        v=i*pow( 1 + r /100,y);
        printf("%d \t %.2lf\n",y,v);
    }
    return 0;
}
