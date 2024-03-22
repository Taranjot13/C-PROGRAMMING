//Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter any year: ");
    scanf("%d", &year);
    if((year%4==0 && year%100!=0) ){
        printf("%i is a leap year.",year);
    }
    else{
        printf("%i is a not leap year.",year);
    }
    return 0;
}
