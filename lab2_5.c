#include<stdio.h>
int main(){
    int a,b,c,total;
    float avg;
    char grade='C';
    printf("Enter marks of three subjects:");
    scanf("%d %d %d",&a,&b,&c);
    total=a+b+c;
    avg=total/3;
    if(avg>80){grade='A';}
    else if (avg>60 && avg<80){
    grade='B';}
    switch(grade){
        case 'A':{printf("grade is A.");break;}
        case 'B':{printf("grade is B.");break;}
        default:{printf("grade is C.");}
    }
    return 0;
}