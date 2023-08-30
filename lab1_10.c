#include<stdio.h>
int main(){
    float basic,da,hra,gross;
    printf("Enter basic salary:");
    scanf("%f",&basic);
    da = 0.2*basic;
    hra = 0.1*basic;
    gross = basic + da + hra;
    printf("The gross is %.2f.\n",gross);
    printf("The da is %.2f.\n",da);
    printf("The hra is %.2f.",hra);
    return 0;
}