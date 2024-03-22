//According to the Gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.

#include<stdio.h>
int main()
{
    int year, y=2001, leapy, ry, totaldays, day;
    printf("Enter the year: ");
    scanf("%d", &year);
    year = (year-1)-y;
    leapy = year/4;
    ry= year - leapy;
    totaldays = (ry*365) + (leapy*366) + 1;
    day = totaldays%7;
    if(day==0)
        printf("Monday");
    else if(day==1)
        printf("Tuesday");
    else if(day==2)
        printf("Wednesday");
    else if(day==3)
        printf("Thursday");
    else if(day==4)
        printf("Friday");
    else if(day==5)
        printf("Saturday");
    else if(day==6)
        printf("Sunday");
    else
        printf("Wrong Entry");
    return 0;
}
