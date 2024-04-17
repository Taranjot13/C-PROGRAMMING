//Write a program that converts a string like "124" to an integer 124.

#include<stdio.h>
#include <stdlib.h>


int main() 
{
    char strNum[10] = "124";//Numeric string
    
    int intNum = atoi(strNum);//Use atoi() to convert the string to numeric integer
    
    printf("The string %s string has been converted to %d integer", strNum, intNum); //Display the results

    return 0;
}
