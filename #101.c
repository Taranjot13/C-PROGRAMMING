// C program to enter elements in a 2D-array and print the array.

#include <stdio.h>
int main(){
    int row,col,n=2,m=2;
    int A[2][2];
    for(row=0;row<n;row++){
        for(col=0;col<m;col++){
            printf("Enter element A[%d][%d]",row,col);
            scanf("%d",&A[row][col]);
        }
    }
    for(row=0;row<n;row++){
            printf("[");
        for(col=0;col<m;col++){
           printf("%d\t",A[row][col]);
    }printf("]\n");
    }
    return 0;
}
