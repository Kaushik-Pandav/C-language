#include<stdio.h>
int main(){
    int n,fact=1;
    restart:
    
    printf("Enter a number to find a fectroial:");
    scanf("%d",&n);
    
    if (n<=0){
        printf("ERROR:Enter a positive Number\n");
        goto restart;
    }
    else{
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the fectorial is : %d",fact);
    }
}