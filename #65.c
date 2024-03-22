//C program to sort  an array.

#include <stdio.h>

int main() {
    int i, j, n, temp;
    
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    
    int a[n];
    
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort algorithm
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
    
    return 0;
}

