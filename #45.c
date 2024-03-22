// C program to print sum of even number between 1 and 200.

#include <stdio.h>
int main()
{
    int n=200;
    int i;
    int sum=0;
    for (i=1;i<=n;i++){
        if(i%2==0){
            sum=sum+i;
        }
        else{
            continue;
        }
    }
    printf("Sum in %i.",sum);
    return 0;
}
