#include<stdio.h>
int main(){
    int row;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){
            printf("%d",i);
        } printf("\n");
    }
    return 0;
}