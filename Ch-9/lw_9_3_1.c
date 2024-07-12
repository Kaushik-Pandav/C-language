#include<stdio.h>
int main(){
    
    int sum=0,n;
    start:
    printf("enter a number :");
    scanf("%d",&n);
    
    if(n<0){
        printf("please,enter a positive number\n");
        goto start;
    }
    else{
    for(int i=0;i<=n;i++){
        sum=sum+i;
    }
    printf("sum is = %d",sum);
    }
}