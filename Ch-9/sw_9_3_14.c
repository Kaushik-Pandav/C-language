#include<stdio.h>
int main()
{
    int num,ld,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for( ;num%10!=0;num=num/10){
        ld=num%10;
        sum=sum+ld;
    }
    printf("the sum is : %d",sum);
}