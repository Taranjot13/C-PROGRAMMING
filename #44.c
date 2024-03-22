//C program to convert temperature from Fahrenheit to Centigrade.

#include <stdio.h>
int main()
{
    float x;
    printf("Temperature in Fahrenheit degree: ");
    scanf("%f",&x);
    float c;
    c=(x-32)*0.56;
    printf("Temperature in Centigrade degrees %.2f\n",c);
  return 0;
}
