// C program to concatenate two strings without using strcat.

#include <stdio.h>
#include <string.h>
int main( )
{
    char s1[ 100 ],s2[100] ;
    int i,j;
    puts("Enter first string");
    fgets(s1,sizeof(s1),stdin);
    puts("Enter second string");
    fgets(s2,sizeof(s2),stdin);
    while(s1[i]!='\0')
      i++;
      while(s2[j]!='\0')
      {
        s1[i]=s2[j];
        j++;
        i++;
      }
      s1[i]='\0';
      printf("\nConcatenated String is %s",s1);
    return 0 ;
}
