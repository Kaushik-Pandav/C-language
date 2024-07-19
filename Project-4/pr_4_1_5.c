#include<stdio.h>
int main()
{
    for(int i=5;i>=1;i--)
    {
        for(int s=i;s>=2;s--)
        {
            printf("  ");
        }
        for(int j=i;j<=5;j++)
        {
            if(i==2 && j==2)
            {
                printf("3 ");
                continue;
            }
            printf("%d ",j);
        }
        for(int k=4;k>=i;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}