#include<stdio.h>
int main(){
    char a;
    printf("enter a character:");
    scanf(" %c",&a);
    printf("The ASCII value of the character '%c' is %d.",a,a);
    return 0;
}