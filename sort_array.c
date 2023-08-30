#include<stdio.h>
int main(){
    int arr[20],len,t;
    printf("Enter the length of array:");
    scanf("%d",&len);
    printf("Enter the numbers:");
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=len-1;j>0;j--){
        for(int i=0;i<=j-1;i++){
            if(arr[i]>arr[i+1]){
                t=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=t;
            }
        }
    }
    printf("Sorted array:");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
