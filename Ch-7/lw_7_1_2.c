#include<stdio.h>
int main(){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("%d is positive number",a);
    }
    else if (a==0){
        printf("%d is neutral number",a);
    }
    else{
        printf("%d is nagative number",a);
    }

}
  