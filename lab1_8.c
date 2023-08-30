#include<stdio.h>
#include<math.h>
int main(){
    float r;
    printf("Enter radius:");
    scanf("%f",&r);
    float area = 3.14*pow(r,2);
    printf("Area is %.2f.",area);
    return 0;
}