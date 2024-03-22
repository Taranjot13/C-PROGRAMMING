//If the marks obtained by a student in five different subjects are input through the keyboard, write a program to find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter marks of subject a : ");
    scanf("%i",&a);
    printf("Enter marks of subject b : ");
    scanf("%i",&b);
    printf("Enter marks of subject c : ");
    scanf("%i",&c);
    printf("Enter marks of subject d : ");
    scanf("%i",&d);
    printf("Enter marks of subject e : ");
    scanf("%i",&e);
    float ag,percentage;
    ag=(a+b+c+d+e);
    percentage=ag/500*100;
    printf("The aggregate marks are : %.2f\n",ag);
    printf("The percentage is : %.2f\n",percentage);
    return 0;
}
