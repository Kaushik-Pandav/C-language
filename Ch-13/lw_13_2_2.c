#include<stdio.h>
int main()
{
    int r,c;
    printf("enter rows: ");
    scanf("%d",&r);
    printf("enter columns: ");
    scanf("%d",&c);
    int a[r][c],b[r][c],d[r][c];
    printf("enter elements of first matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter elements of second matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            d[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("sum of matrices:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",d[i][j]);
        }
        printf("\n");
    }
}