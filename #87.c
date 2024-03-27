//Write a program to show the use of passing pointer as arguments to the functions.

#include <stdio.h>
int main()
{
    int salary=0, bonus=0;
    printf("Enter the employee current salary:"); 
    scanf("%d", &salary);
    printf("Enter bonus:");
    scanf("%d", &bonus);
    salaryhike(&salary, bonus);
    printf("Final salary: %d", salary);
    return 0;
}
void salaryhike(int  *var, int b)
{
    *var = *var+b;
}
