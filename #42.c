//Program to Calculate BMI

#include <stdio.h>
int main()
{
    float b,w,h;
    printf("Enter weight : ");
    scanf("%f",&w);
    printf("Enter height : ");
    scanf("%f",&h);
    b=(w/(h*h));
    printf("BMI is %.2f .\n",b);
    if(b>=15 && b<=17){
        printf("underweight");
    }
    if(b>=17.1 && b<=25){
        printf("ideal");
    }
    if(b>=25.1 && b<=30){
        printf("overweight");
    }
    if(b>=30.1){
        printf("overweight");
    }
    return 0;
}
