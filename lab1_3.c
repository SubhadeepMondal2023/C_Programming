#include<stdio.h>
int main(){
    int number;
    char letter;
    printf("Enter an integer:");
    scanf("%d",&number);
    printf("Enter a character:");
    scanf(" %c",&letter);
    printf("The integer is %d and char is %c.",number,letter);
    return 0;
}