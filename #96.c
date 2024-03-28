// Twenty-five numbers are entered from the keyboard into an array.Write a program to find out how many 
// of them are positive, how many are negative, how many are even and how many odd.

#include<stdio.h>
int main()
{
	int arr[25],i,pos=0,neg=0,zer=0, even=0, odd=0;
	for(i=0;i<25;i++)
	{
		printf("Enter a number : ");
		scanf("%d", &arr[i]);
	}
	for(i=0;i<25;i++)
	{
		if(arr[i]>0)
			pos++;
		if(arr[i]<0)
			neg++;
		if(arr[i]==0)
			zer++;
		
		if(arr[i]%2==0)
		   even++;
		 else
		    odd++;
	}
	printf("\n\nData contain %d positive, %d negative, %d zeroes, %d even and %d odd numbers",pos,neg,zer, even, odd);
	return 0;
}
