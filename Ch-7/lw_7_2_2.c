#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    printf("enter the third number: ");
    scanf("%d",&c);
    printf("enter the last number: ");
    scanf("%d",&d); 
    if(a==b && a==c && a==d && b==c && b==d && c==d) {
        printf("you are the smartest !!!");
    }
        else if(a>b){
            if(a>c){
                if(a>d){
                     printf("%d is big",a);
                }
                else{
                    printf("%d is big",d);
                }
            }
            else{
                if(c>d){
                    printf("%d is big",c);
                }
                else{
                    printf("%d is big",d);
                }
            }

        }
        else{
            if(b>c){
                if(b>d){
                    printf("%d is big",b);
                }
                else{
                    printf("%d is big",d);
                }
            }
            else{
                if(c>d){
                    printf("%d is big",c);
                }
                else{
                    printf("%d is big",d);
                }
            }
        }
    }        
