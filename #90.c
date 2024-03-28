//C program to find second largest element in an array

#include <stdio.h>

int main() 
{
    int a[5], i, j, temp;

    // Input array elements
    for(i = 0; i < 5; i++)
    {
        printf("Enter array element: ");
        scanf("%d", &a[i]);
    }

    // Bubble sort
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4 - i; j++) {
            if(a[j] > a[j + 1]) {
                // Swap elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Print sorted array elements
    printf("\nSorted array elements:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
printf("The second largest element is %d\n", a[3]);
    return 0;
}
