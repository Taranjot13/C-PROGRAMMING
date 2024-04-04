/*
Given three variables x, y, z write a function to circularly shift their
values to right. In other words if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x =10. Call the function with variables a, b, c to
circularly shift values.
*/

#include<stdio.h>
int shift(int *a, int *b, int *c);
void main()
{
    int x, y, z;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);
    printf("Before Shift: x: %d\ty: %d\tz: %d",x,y,z);
    shift(&x, &y, &z);
    printf("\nAfter Shift: x: %d\ty: %d\tz: %d",x,y,z);
}
int shift(int *a, int *b, int *c)
{
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
