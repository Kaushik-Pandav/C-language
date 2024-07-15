#include<stdio.h>
int main(){
    int n,rev=0,i=0,ld;
    printf("enter a number: ");
    scanf("%d",&n);
    for( ;n%10!=0;n=n/10){
        ld=n%10;
        rev=rev*10+ld;
        i++;
    }
    printf("total digit in this number is %d",i);
}