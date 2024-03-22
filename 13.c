//If cost price and selling price of an item are input through the keyboard, write a program to determine whether the seller has made profit or incurred loss. Also determine how much profit he made or loss he incurred.

#include <stdio.h>
int main() {
    int cp,sp;
    printf("Enter cost price: ");scanf("%i",&cp);
    printf("Enter selling price: ");scanf("%i",&sp);
    int p,l;
    p=sp-cp;
    l=cp-sp;
    if(cp<sp){
        printf("The owner had made profit by %i.",p);
    }
    else{
        printf("The owner had incurred loss by %i.",l);
    }
    return 0;
}
