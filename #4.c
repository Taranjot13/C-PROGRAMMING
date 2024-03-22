//Temperature of a city in Fahrenheit degrees is input through the keyboard. Write a program to convert this temperature into Centigrade degrees. 
#include <stdio.h>
int main()
{
    float x;
    printf("Temperature in Fahrenheit degree: ");
    scanf("%f",&x);
    float c;
    c=(x-32)*0.56;
    printf("Temperature in Centigrade degrees %.2f",c);
    return 0;
}
