//c program to find smallest element in an array


#include <stdio.h>
int main() {
    int n, i;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Assume the first element is the smallest
    int smallest = arr[0];
    
    // Iterate through the array to find the smallest element
    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    
    printf("The smallest element in the array is: %d\n", smallest);
    
    return 0;
}
