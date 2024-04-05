/*
C program to satisfy below conditions
1.If a year is divisible by 400 ->leap year eg.2000
2.If a year is not divisible by 400 but divisible by 100 ->not leap year eg.1900
3.If a year is not divisible by 400 but divisible not by 100 and divisible by 4 -> leap year eg. 2012
*/

#include <stdio.h>
int main() {
    int year;
    printf("Enter Year: ");
    scanf("%i",&year);
    if((year%400)==0){
        printf("%d is a Leap year.",year);
    }
    if(((year%400)!=0)&&((year%1000)==0)){
        printf("%d is not a Leap year.",year);
    }
    if(((year%400==0)&&(year%100==0)) || ((year%4==0)&&(year%100!=0))){
        printf("%d is a Leap year.",year);
    }
        return 0;
}
