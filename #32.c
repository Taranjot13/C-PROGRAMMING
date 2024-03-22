//Calculate sum,difference,product or division using switch case.

#include <stdio.h>
int main()
{
    int option,num1,num2,sum,mul,div,diff;
    printf("Enter num1 : ");
    scanf("%d",&num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);
    printf("Enter your choice: ");
    printf("(1) The Sum ");
    printf("(2) The Difference");
    printf("(3) The Product");
    printf("(4)The Division");
    printf("(5)Exit");
    printf("Enter Your Option");
    scanf("%d",&option);
    switch(option){
        case 1:
            {
                printf("The sum of %d and %d is %d.",num1,num2,(num1+num2));
            }
        case 2:
            {
                printf("The difference of %d and %d is %d.",num1,num2,(num2-num1));
            }
        case 3:
            {
                printf("The product of %d and %d is %d.",num1,num2,(num1*num2));
            }
        case 4:
            {
                printf("The division of %d and %d is %d.",num1,num2,(num2/num1));
            }
        case 5:
            break;

    }
    return 0;
}
