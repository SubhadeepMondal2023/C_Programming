#include<stdio.h>
void main(){
    int i=1,a,b;
    char c;
    for(;i<=10;i++){
        if(i%2==0)
            continue;
        printf("%d",i);
    }
}