Using conditional operators determine: Whether the character entered through the keyboard is a lower case alphabet or not.

#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter Alphabet: ");
    scanf("%c",&alpha);
    if(alpha>='a' && alpha<='z'){
        printf("%c is a lower-case alphabet.",alpha);
    }
    else{
        printf("%c is not a lower-case alphabet.",alpha);
    }
    return 0;
}
