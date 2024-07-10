#include<stdio.h>
int main(){
    int a,b;
    printf("enter range (years) :");
    scanf("%d %d",&a,&b);
    while(a<=b){
        if(a%4==0){
            printf("%d ",a);
        }
        a++;
    }
}