/*Write a program to perform the following operations on ID-Array:
Insert
Update
Delete
Display
Search
*/


//Insert Operation

#include <stdio.h>  
int insertSorted(int array[], int n, int key, int capacity)  
{  
    if (n >= capacity)  
        return n;  
    array[n] = key;  
    return (n + 1);  
}  
int main()  
{  
    int array[20] = { 22, 26, 30, 50, 60, 80 };  
    int capacity = sizeof(array) / sizeof(array[0]);  
    int n = 6;  
    int i, key = 34;  
    printf("\n Before Insertion: ");  
    for (i = 0; i < n; i++)  
        printf("%d ", array[i]);  
    n = insertSorted(array, n, key, capacity);  
    printf("\n After Insertion: ");  
    for (i = 0; i < n; i++)  
        printf("%d ", array[i]); 
    return 0;  
}  


//Update Operation

#include<stdio.h>
int main()
{
  int i,t,a[10],n,m,s,j=0,b[10];
  printf("\nEnter the Limit:");
  scanf("%d",&n);
  printf("\nEnter the Values:");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nGiven values are:");
  for(i=0;i<n;i++)
  {
    printf("a[%d]=%d",i,a[i]);
  }
  printf("\nEnter the position to be update:");
  scanf("%d",&t);
  printf("\nEnter the value to be update:");
  scanf("%d",&s);
  for(i=0;i<n;i++)
  {
    if(i==t)
    {
       a[i]=s;
    }
  }
  printf("\nUpdated value is:");
  for(i=0;i<n;i++)
  {
    printf("\na[%d]=%d",i,a[i]);
  }
  return 0;
}


//Delete Operation

#include <stdio.h>  
int findElement(int array[], int n, int key);  
int deleteElement(int array[], int n, int key)  
{  
    int pos = findElement(array, n, key);  
      if (pos == -1) {  
        printf("Element not found");  
        return n;  
    }  
      int i;  
    for (i = pos; i < n - 1; i++)  
        array[i] = array[i + 1];  
      return n - 1;  
}  
int findElement(int array[], int n, int key)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        if (array[i] == key)  
            return i;  
      return -1;  
}  
  int main()  
{  
    int i;  
    int array[] = { 20, 60, 40, 50, 30 };  
      int n = sizeof(array) / sizeof(array[0]);  
    int key = 40;  
      printf("Array before deletion\n");  
    for (i = 0; i < n; i++)  
        printf("%d ", array[i]);   
    n = deleteElement(array, n, key);  
      printf("\nArray after deletion\n");  
    for (i = 0; i < n; i++)  
        printf("%d ", array[i]);  
    return 0;  
}  


//Display Operation

#include <stdio.h>
void displayIDs(int ids[], int size) {
    printf("IDs:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", ids[i]);
    }
}
int main() {
    int ids[] = {101, 102, 103, 104, 105};
    int size = sizeof(ids) / sizeof(ids[0]);
    displayIDs(ids, size); 
    return 0;
}



//Search Operation:
#include <stdio.h>  
int findElement(int array[], int n, int key)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        if (array[i] == key)  
            return i;  
    return -1;  
}  
int main()  
{  
    int array[] = { 22, 24, 30, 16, 35 };  
    int n = sizeof(array) / sizeof(array[0]);  
    int key = 16;  
    int position = findElement(array, n, key);  
    if (position == -1)  
        printf("Element not found");  
    else  
        printf("Element Found at Position: %d",  
            position + 1);  
    return 0;  
}  
