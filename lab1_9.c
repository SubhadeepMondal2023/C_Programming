#include<stdio.h>
int main(){
    int f,c;
    printf("Enter the temp in fahrenhiet:");
    scanf("%d",&f);
    c = 5*(f-32)/9;
    printf("Temp. in centigrade is:%d",c);
    return 0;
}