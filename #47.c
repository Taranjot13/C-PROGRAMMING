//Write a program to find the factorial value of any number entered through the keyboard.

#include <stdio.h>
int main()
{
    int i,f=1,j=1;
    printf("Enter a positive integer:");
    scanf("%i",&i);
    while(j<=i){
        f=f*j;
        j++;
    }
    printf("Factorial of %i is %i.",i,f);
    return 0;
}
