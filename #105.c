// Write a program to find the smallest element in 2D Array

#include <stdio.h>
int main() {
    int rows=0,col=0,i,j,min=1111;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    printf("Enter no. of col:");
    scanf("%d",&col);
    int A[rows][col];
    for(i=0;i<rows;i++)
     {
         for(j=0;j<col;j++)
         {
             printf("\nA[%d][%d]: ",i,j);
             scanf("%d", &A[i][j]);
         }
     }
     for(i=0;i<rows;i++)
     {
         for(j=0;j<col;j++)
         {
             if (A[i][j]<min)
             {
                 min=A[i][j];
             }
         }
     }
     printf("The smallest element is: %d",min);
    return 0;
}
