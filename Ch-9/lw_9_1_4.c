#include<stdio.h>
int main(){
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    while(n>=1){
        if(n%2!=0){
            printf("%d ",n);
        }
        n--;
    }

}