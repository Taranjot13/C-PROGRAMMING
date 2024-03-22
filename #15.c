//Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Hint: Use the % (modulus) operator)

#include <stdio.h>
int main() {
    int y;
    printf("Enter Year: ");scanf("%i",&y);
    if(y%4==0){
        printf("The year %i is a leap year.",y);
    }
    else{
        printf("The year %i is not a leap year.",y);
    }
    return 0;
}
