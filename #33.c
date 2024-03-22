//Find Factorial, Prime, Odd or even using switch case.

#include <stdio.h>
int main()
{
    int option,num1,fact,prime,oddd,even,i=0;
    fact=1;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter your choice: \n");
    printf("(1) The Factorial\n");
    printf("(2) The Prime or not\n");
    printf("(3) The Odd or even\n");
    printf("(5)Exit\n");
    printf("Enter Your Option\n");
    scanf("%d",&option);
    switch(option){
        case 1:
            {
                for(i=1;i<=num1;i++){
                        fact=fact*i;
              }
                printf("The factorial of %d is %d.\n",num1,fact);
            }
            break;
        case 2:
            {
            }
            break;
        case 3:
            {
                if(num1%2==0){
                    printf("%d is even.",num1);
                }
                else{
                    printf("%d is odd.",num1);
                }
            }
            break;
        case 5:
            break;
    }
    return 0;
}
