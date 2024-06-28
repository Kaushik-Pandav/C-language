#include<stdio.h>

int main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    if(a>b){
        printf("the minimum number among two integer is %d",b);
        }
    else{
        printf("the minimum number among two number is %d",a);
        }

}