//If an array arr contains n elements, then write a program to check if arr[ 0 ] = arr[ n-1 ], arr[ 1 ] = arr[ n - 2 ] and so on.

#include<stdio.h>
void main()
{
    int n,a,b;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    for(i=0;i<n;i++)
    {
    b=i+1;
    a=n-b;
    if(arr[i]==arr[a])
    printf("arr[%d] = arr[%d - %d] ",i,n,b);
    }
}
