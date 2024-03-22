//Find largest side if three sides are entered by user.

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    printf("Enter side 1:");
    scanf("%i",&a);
    printf("Enter side 2:");
    scanf("%i",&b);
    printf("Enter side 3:");
    scanf("%i",&c);
    int suma ,sumb,sumc;
    suma=b+c;
    sumb=a+c;
    sumc=a+b;
    if((a>b) &&(a>c)){
        printf("Largest side is %i.\n",a);
        printf("Sum of other two sides is %i.\n",suma);
    }
    if((b>c) &&(b>c)){
        printf("Largest side is %i.\n",b);
        printf("Sum of other two sides is %i.\n",sumb);
    }
    if((c>b) &&(c>a)){
        printf("Largest side is %i.\n",c);
        printf("Sum of other two sides is %i.\n",sumc);
    }
    return 0;
}
