//Any integer is input through the keyboard. Write a program to find out whether it is an odd number or even number.

#include <stdio.h>
int main() {
    int i;
    printf("Enter integer: ");scanf("%i",&i);
    if(i%2==0){
        printf("The integer %i is even.",i);
    }
    else{
        printf("The integer %i is odd.",i);
    }
    return 0;
}
