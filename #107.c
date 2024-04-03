// write a program to find if a square matrix is symmetric

#include <stdio.h>
int main() {
    int rows=0,col=0,i,j,symmetric=1;
    printf("Enter no. of rows:");
    scanf("%d",&rows);
    printf("Enter no. of col");
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
            if (A[j][i]!=A[i][j])
              { 
                  symmetric=0;
               break;
                  
              }
         }
         if (symmetric==0)
         {
             break;
         }
      }
      if (symmetric==0)
     {
         printf("not symmetric");
     }
     else
     {
         printf("\nThis is symmetric matrix \n");
     }
     
     printf("\nThis is original matrix \n");
     printf("\n");
     for (i=0; i<rows; i++)
     {
         for(j=0;j<col;j++)
         {
             printf(" %d ",A[i][j]);
         }
         printf("\n");
     }
     printf("\nA matrix is sqymmetric if it is equal to its transpose\n");
     printf("transposed matrix\n");
     for(j=0;j<col;j++)
     {
         for(i=0;i<rows;i++)
         {
             printf(" %d ",A[i][j]);
         }
         printf("\n");
     }
    return 0;
}
