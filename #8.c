//If a five-digit number is input through the keyboard, write a program to reverse the number.
#include <stdio.h>
int main()
{
    int num,a,b,c,d,e;
	printf("Enter a five digit number : ");
	scanf("%d", &num);
	e=num%10;
	d=(num/10)%10;
	c=(num/100)%10;
	b=(num/1000)%10;
	a=(num/10000);
	printf("reverse of number is %i%i%i%i%i",e,d,c,b,a);
    return 0;
}
