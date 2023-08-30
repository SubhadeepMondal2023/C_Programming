#include<stdio.h>
int fibo(int n1,int n2,int n);
int main(){
    int n,n1=0,n2=1;
    printf("enter no. of terms:");
    scanf("%d",&n);
    printf("Fibonacci sequence:");
    fibo(n1,n2,n);
    return 0;
}
int fibo(int n1,int n2, int n){
    if(n){
        printf("%d ",n1);
        return fibo(n2,n1+n2,--n);
    }
    return 0;
}
