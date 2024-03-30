// C program to print table using functions

#include <stdio.h>
void printtable();
int main() {
    int n;
    scanf("%i",&n);
    printtable(n);
    return 0;
}
void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d X %d = %d\n",n,i,i*n);
    }
}
