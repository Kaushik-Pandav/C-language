#include<stdio.h>
int main()
{
    int a,b;
    int *p1=&a;
    int *p2=&b;
    printf("enter A:");
    scanf("%d",p1);
    printf("enter B:");
    scanf("%d",p2);
    printf("before swaping value of A is %d and B is %d\n",*p1,*p2);
    *p1=(*p1)+(*p2);
    *p2=(*p1)-(*p2);
    *p1=(*p1)-(*p2);
    printf("after swaping value of A is %d and B is %d",*p1,*p2);
}   