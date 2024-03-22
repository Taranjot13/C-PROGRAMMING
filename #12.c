//Consider a currency system in which there are notes of seven denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, write a program to compute the smallest number of notes that will combine to give Rs. N.

#include <stdio.h>
int main() {
    int a,r100,r2,r5,r10,r50,r1,a1,a2,a5,a10,a50,a100,total;
    printf("enter sum of notes: ");
    scanf("%d",&a);
    a100=a/100;
    r100=a%100;

    a50=r100/50;
    r50=r100%50;

    a10=r50/10;
    r10=r50%10;

    a5=r10/5;
    r5=r10%5;

    a2=r5/2;
    r2=r5%2;

    a1=r2/1;
    r1=r2%1;
    total=a100+a50+a10+a5+a2+a1;
    printf("Hundred number notes: %i\n",a100);
    printf("Fifty number notes: %i\n",a50);
    printf("Ten number notes: %i\n",a10);
    printf("Five number notes: %i\n",a5);
    printf("Two number notes: %i\n",a2);
    printf("One number notes: %i\n",a1);
    printf("The minimum number of notes: %i",total);
    return 0;
}
