// C program to print hello world five times using recursion

#include <stdio.h>
void HW();
int main() {
    int count=5;
    HW(count);
    return 0;
}
void HW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    HW(count-1);
    }
