#include<stdio.h>
int main(){
    int i,n,num,max=0,min=999;
    printf("Enter the no. of numbers to be taken:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number:");
        scanf("%d",&num);
        if(num>max){max=num;}
        else if(num<min){min=num;}

    }
    printf("Max num is %d and Min num is %d.",max,min);
}