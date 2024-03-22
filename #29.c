//Write a program to receive value of an angle in degrees and check whether sum of squares of sine and cosine of this angle is equal to 1.

#include <stdio.h>
#include <math.h>
int main()
{
    float angle;
    printf("enter angle in degree\n");
    scanf("%f", &angle);
    float sin2=(pow(sin(angle),2));
    float cos2=(pow(cos(angle),2));
    printf("Sine of %.2f is %.2f.\n",angle,sin(angle));
    printf("Cosine of %.2f is %.2f.\n",angle,cos(angle));
    if((sin2 + cos2)==1){
        printf("Sum of squares of sine and cosine of this angle is equal to 1.");
    }
    else{
        printf("Sum of squares of sine and cosine of this angle is not equal to 1.");
    }
    return 0;
}
