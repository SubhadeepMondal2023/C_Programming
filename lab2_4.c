#include<stdio.h>
int main(){
    int a;
    printf("Enter the year:");
    scanf("%d",&a);
    if(a%400==0 || (a%100!=0 && a%4==0))
    {
        printf("Leap Year.");
    }
    else{
        printf("Not a leap year.");
    }
    return 0;
}