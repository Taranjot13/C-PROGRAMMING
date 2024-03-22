//Write a program to enter numbers till the user wants. At the end it should display the count of positive, negative and zeros entered.

#include <stdio.h>
int main()
{
    int i,j=1,p=0,y=0,z=0,x;
    printf("Enter a no. of inputs:");
    scanf("%i",&i);
    while(j<=i){
        printf("Enter an integer:");
        scanf("%i",&x);
        if(x>0){
            p+=1;
        }
        if(x<0){
            y=y+1;
        }
        if(x==0){
            z+=1;
        }
        j++;
    }
    printf("No. of Positive number inputs are %d.\n",p);
    printf("No. of Negative number inputs are %d.\n",y);
    printf("No. of Zero inputs are %d.\n",z);
    return 0;
}
