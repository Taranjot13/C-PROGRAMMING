//Searching from 25 elements and count how many times it appeared

#include <stdio.h>
int main() 
{
   int i,j,n,count=0,num;
   int a[25];
   printf("Enter the elements of Array-A\n");
   for(i=0;i<24;i++)
   {
       scanf("%d", &a[i]);
   }
   for(i=0;i<24;i++)
   {
       printf("%d ", a[i]);
   }
   printf("\nenter the number you want to search:");
   scanf("%d", &num);
   
   for(i=0;i<24;i++)
   {
       if(a[i]==num)
        {
            printf("\nThe location is %d",i);
            count++;
        }   
   }
   printf("\nthe number appeared %d times",count);
    return 0;
}
