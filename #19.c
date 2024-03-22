//Write a program to check whether a triangle is valid or not, when the three angles of the triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include <stdio.h>
int main()
{
    int a,b,c;
	printf("Enter Angle 1: ");
	scanf("%d",&a);
	printf("Enter Angle 2: ");
	scanf("%d",&b);
	printf("Enter Angle 3: ");
	scanf("%d",&c);
	int sum=a+b+c;
    if(sum==180){
        printf("The triangle is valid.");
    }
    else{
        printf("The triangle is not valid.");
    }
    return 0;
}
