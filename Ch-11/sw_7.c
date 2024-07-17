#include<stdio.h>
int main()
{
    int a=0,b=1,c=0;
    for(int i=1;i<=4;i++)
    {
        printf("%d ",a);
        printf("%d ",b);
        for(int j=3;j<=i+2;j++)
        {
            c=a+b;
            printf("%d ",c);
            b=a;
            c=b;
            a=c;
        }
        printf("\n");
    }
}