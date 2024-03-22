//Write a program to find the greatest of the three numbers entered through the keyboard. Use conditional operators.

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("first number:");
    scanf("%i", &a);
    printf("second number:");
    scanf("%i", &b);
    printf("third number:");
    scanf("%i", &c);
    if(a>c && a>b ){
        printf("%i is greatest out of %i, %i and %i.",a,a,b,c);
    }
    if( b>a && b>c){
        printf("%i is greatest out of %i, %i and %i.",b,a,b,c);
    }
    if( c>a && c>b){
        printf("%i is greatest out of %i, %i and %i.",c,a,b,c);
    }
    return 0;
}
