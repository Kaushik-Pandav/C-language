#include<stdio.h>

int main(){
    int a,b,c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the third number:");
    scanf("%d",&c);

    if(a==b || a==c || b==c){
        printf("you are the smartest !!!");
    }
    else if(a<b){
        if(a<c){
            printf("%d is smallest",a);
        }
          else{
            printf("%d is smallest",c);
         }
     }
    else{
        if(b<c){
            printf("%d is smallest",b);
        }
        else{
            printf("%d is smallest",c);
        }
    }
}