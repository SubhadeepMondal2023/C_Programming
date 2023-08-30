#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    c=b;
    b=a;
    a=c;
    printf("After swapping using thrid variable: '%d' and '%d'.\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping without using thrid variable: '%d' and '%d'.",a,b);
    return 0;
}