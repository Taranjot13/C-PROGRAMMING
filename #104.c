// write a program to find the largest element in 2D Array


#include <stdio.h>
int main() {
    int rows=0,col=0,i,j,max=0;
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
             if (A[i][j]>max)
             {
                 max=A[i][j];
             }
         }   
     }
     printf("The largest element is: %d",max);
    return 0;
}
