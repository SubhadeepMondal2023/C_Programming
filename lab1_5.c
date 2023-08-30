#include<stdio.h>
int main(){
    int num,a,b,c,d,sum=0;
    printf("Enter any 3 digit number:");
    scanf("%d",&num);
    a = num%10;
    b = num/10;
    c = b%10;
    d = b/10;
    sum = a+c+d;
    printf("The sum is %d.",sum);
    return 0;

    /*FOR LOOP*/
    /*int num,n,sum=0,product=1;
    printf("How many digit number to take?");
    scanf("%d",&n);
    printf("Enter %d-digit number:",n);
    scanf("%d",&num);
    for(int i=0;i<n;i++){
        int rem = num%10;
        sum += rem;
        if(rem==0){
            product *= 1;
            }
        else{
            product *= rem;
        }
        num = num/10;
    }
    printf("Sum is %d.",sum);
    printf("Product is %d.",product);
    return 0;*/

    /*WHILE LOOP*/
    /*int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);    
    while(n>0)    
    {    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    }    
    printf("Sum is=%d",sum);    
    return 0;*/
    
    /*DO WHILE*/
    /*int n,sum=0,m;    
    printf("Enter a number:");    
    scanf("%d",&n);  
    do{    
    m=n%10;    
    sum=sum+m;    
    n=n/10;    
    }while(n>0);    
    printf("Sum is=%d",sum);    
    return 0;*/
}
