#include<stdio.h>
int main()
{
    int r;
    printf("enter the number of rows and columns ");
    scanf("%d",&r);
    int a[r][r],b[r][r];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            b[i][j]=0;
        }
    }
   for(int i=0;i<r;i++)
   {
    for(int j=0;j<r;j++)
    {
        b[i][j]=a[j][i];
    }
   }
    printf("transpose of the matrix is:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
}