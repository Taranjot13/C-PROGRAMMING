//If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits. (Hint: Use the modulus operator ‘%’).
#include <stdio.h>
int main()
{
    int num,a,b,c,d,e;
	printf("Enter a five digit number : ");
	scanf("%i", &num);
	e=(num/1)%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	printf("The sum of the digits of the number %i is %i .", num,a+b+c+d+e);
    return 0;
}
