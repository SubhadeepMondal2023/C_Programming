#include<stdio.h>
int facto(int);
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("The factorial is:%d",facto(num));
    return 0;
}
int facto(int num)
{
    if(num>1){
        return num*facto(num-1);
    }
    return num;
}