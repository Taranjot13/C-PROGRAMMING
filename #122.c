// C program to find vowels and consonants in a string

#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main( )
{
char s[ 1000 ],r,line[100],i ;
int total=0,vowel=0,consonant=0;
puts("Enter a string");
fgets(s,sizeof(s),stdin);
for (i=0;s[i]!='\0';i++){
    line[i]=tolower(s[i]);
    if(line[i]=='a'|| line[i]=='e'|| line[i]=='i' ||line[i]=='o'||line[i]=='u'){
        vowel++;
    }
    else if(line[i]>='a' && line[i]<='z'){
        consonant++;
    }
    
}
printf("\nVowels %i\n",vowel);
printf("Consonants %i\n",consonant);
return 0 ;
}
