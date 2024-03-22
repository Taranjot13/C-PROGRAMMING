//If the ages of Ram, Shyam and Ajay are input through the keyboard, write a program to determine the youngest of the three.

#include <stdio.h>
int main()
{
    int a,b,c;
	printf("Enter age of Ram: ");
	scanf("%d",&a);
	printf("Enter age of Shyam: ");
	scanf("%d",&b);
	printf("Enter age of Ajay: ");
	scanf("%d",&c);
    if((a<b && a<c)||(a<c && a<b)){
        printf("Ram is youngest of the three.");
    }
    if((b<a && b<c)||(b<c && b<a)){
        printf("Shyam is youngest of the three.");
    }
    if((c<a && c<b)||(c<b && c<a)){
        printf("Ajay is youngest of the three.");
    }
    return 0;
}
