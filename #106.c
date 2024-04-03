// write a program to find the transpose of 2D Array

#include <stdio.h>
int main() {
    int rows=0,col=0,i,j,max=0;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    printf("Enter no. of col");
    scanf("%d",&col);
    int A[rows][col];
    int B[col][rows];
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
              B[j][i]=A[i][j];
             }
         }
     printf ("Original matrix");
     printf("\n");
     for (i=0; i<rows; i++)
     {
         for(j=0;j<col;j++)
         {
             printf(" %d ",A[i][j]);
         }
         printf("\n");
     }
     printf("Transposed matrix \n");
     for(j=0;j<col;j++)
     {
         for(i=0;i<rows;i++)
         {
             printf(" %d ",B[j][i]);
         }
         printf("\n");
     }
    return 0;
}
