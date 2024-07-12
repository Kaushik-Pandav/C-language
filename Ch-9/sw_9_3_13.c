#include<stdio.h>
int main(){
    int n,fact=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            fact++;
        }
    }
    (fact==2)
    ?printf("this is prime number.")
    :printf("this is not a prime number.");
}
