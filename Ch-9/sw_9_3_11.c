#include<stdio.h>
int main(){
    int n,b,c=0;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        b=i*i*(i+1);
        c=c+b;
    }
    printf("%d",c);
}