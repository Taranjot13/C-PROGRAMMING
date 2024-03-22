//Paper of size AO has dimensions 1189 mm x 841 mm. Each subsequent size A(n) is defined as A(n-1) cut in half parallel to its shorter sides. Thus paper of size A1 would have dimensions 841 mm x 594 mm. Write a program to calculate and print paper sizes AO, A1, A2,... A8 number.
#include <stdio.h>
int main()
{
    int a=841;
    int b=1189;
    int c=b/2;
    int d=a/2;
    int e=d/2;
    int f=c/2;
    int g=f/2;
    int h=e/2;
    int i=h/2;
    int j=g/2;
    printf("A0 : %i X %i\n",a,b);
    printf("A1 : %i X %i\n",c,a);
    printf("A2 : %i X %i\n",d,c);
    printf("A3 : %i X %i\n",f,d);
    printf("A4 : %i X %i\n",e,f);
    printf("A5 : %i X %i\n",g,e);
    printf("A6 : %i X %i\n",h,g);
    printf("A7 : %i X %i\n",j,h);
    printf("A8 : %i X %i\n",i,j);
    return 0;
}
