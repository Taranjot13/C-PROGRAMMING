//A five-digit number is entered through the keyboard. Write a program to obtain the reversed number and to determine whether the original and reversed numbers are equal or not.

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
	int rn=((e*10000)+(d*1000)+(c*100)+(b*10)+(a*1));
	printf("reverse of number is %i.\n",rn);
    if(num==rn){
        printf("The original and reversed numbers are equal.");
    }
    else{
        printf("The original and reversed numbers are not equal.");
    }
    return 0;
}
