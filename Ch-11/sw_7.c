#include<stdio.h>
int main()
{
    int a=0,b=1,c=0;
    for(int i=1;i<=4;i++)
    {
        for(int j=3;j<=i+2;j++)
        {
            printf("%d ",c);
            c=a+b;
            b=a;
            c=b;
            
        }
        printf("\n");
    }
}