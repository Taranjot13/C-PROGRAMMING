// Write a program to copy the contents of one array into another in the reverse order.

#include <stdio.h>
int main() 
{
   int i,j,n;
   printf("enter the number of elements:");
   scanf("%d",&n);
   int a[n],b[n];
   printf("Enter the elements of Array-A\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("The array is\n [");
   for(i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   printf("]\n");
   for(i = n - 1,j = 0;i >= 0;i--,j++)
   {
       b[j]=a[i];
   }
   printf("The new array is\n [");
    for(j=0;j<n;j++)
   {
       printf("%d ",b[j]);
   }
   printf("]");
    return 0;
}
