// C program to print sum of firn n natural numbers

#include <stdio.h>
void sum();
int main() {
    int n;
    sum(n);
    return 0;
}
void sum(int n){
    int sn1=1;
    int sum;
    scanf("%i",&n);
    for(sn1;sn1<=n;sn1++){
        sum=sum+sn1;
        printf("%d\n",sum);
    }
    }
