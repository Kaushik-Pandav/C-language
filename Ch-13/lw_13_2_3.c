#include<stdio.h>
int main()
{
    int r,c,sum=0;
    printf("enter row: ");
    scanf("%d",&r);
    printf("enter column: ");
    scanf("%d",&c);
    int a[r][c];
    printf("enter matrix elements:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("sum of diagonal elements = %d\n",sum);
}