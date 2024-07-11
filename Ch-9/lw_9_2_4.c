#include<stdio.h>
int main(){
    int a=0,b=1,c,n;
    printf("enter anumber :");
    scanf("%d",&n);
    printf("%d,%d",a,b);
    n=n-2;
    for(int i=0;i<n;i++){
        c=a+b;
        printf(",%d",c);
        a=b;
        b=c;
    }
}