//Using conditional operators determine: Whether a character entered through the keyboard is a special symbol or not.

#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c", &ch);
    if((ch >= 32 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch>=91 && ch <= 96) || (ch >= 123 && ch <= 126)){
            printf("%c is a special symbol",ch);
    }
    else{
            printf("%s is not a special synmbol",ch);
    }
}
