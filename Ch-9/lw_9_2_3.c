#include<stdio.h>
int main (){
    int n,i=1;
    printf("enter a nuber:");
    scanf("%d",&n);
    do{
        if(i%2==0){
            printf("%d ",i);
        }
        i++;
    }while(i<=n);
}