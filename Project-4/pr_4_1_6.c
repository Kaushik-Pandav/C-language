#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int s=i;s<=4;s++)
        {
            printf("  ");
        }
        for(int k=i;k<=4;k++)
        {
            printf("  ");
        }
        for(int m=i;m>=1;m--)
        {
            printf("%d ",m);
        }
        printf("\n");
    }
}