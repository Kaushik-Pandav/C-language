#include<stdio.h>
int main(){
    int num,rev=0,ld;
    printf("enter a nunber :");
    scanf("%d",&num);
    for( ;num!=0;num=num/10){
        ld=num%10;
        rev=rev*10+ld;
    }
    if(num==rev)
    {
        printf("thi is palindrome number");
    }
    else
    {
        printf("this is not a palindrom number");
    }
}