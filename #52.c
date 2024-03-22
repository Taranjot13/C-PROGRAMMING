//Write a program to receive an integer and find its octal equivalent. (Hint: To obtain octal equivalent of an integer, divide it continuously by 8 till dividend doesn’t become zero, then write the remainders obtained in reverse direction.)


#include<stdio.h>
#include <math.h>
int main()
{
    int  num, decimal = 0, power = 0, count, a;
    printf("Enter the binary number = ");
    scanf("%d", &num);
    while(num > 0){
        a = num % 10;
        power = pow(2, count);
        decimal += (a * power);
        num /= 10;
        count++;
    }
    int b = 0, c = 0;
    while(decimal > 0){
        b = decimal % 8;
        c = decimal / 8;
        decimal = c;
        rev = (rev * 10) + b;
    }
    printf("rev = %d", rev);

}
