#include<stdio.h>
int main(){
    int n,rev=0,ld,i=0,j=0;
    printf("enter a number:");
    scanf("%d",&n);
    i=n%10;
    for( ;n%10!=0;n=n/10)
    {
        ld=n%10;
        rev=rev*10+ld;
    }
    j=rev%10;
    printf("Sum is %d",i+j);
}