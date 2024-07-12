#include<stdio.h>
int main()
{
    int num,sum=0,mul=1,ld;
    printf("Enter a number: ");
    scanf("%d",&num);
    for( ;num%10!=0;num=num/10){
        ld=num/10;
        sum=sum+ld;
        mul=mul*ld;
    }
    if(sum==num)
    {
        printf("this is magic number");
    }
    else
    {
        printf("this is not a magic number");
    }
}