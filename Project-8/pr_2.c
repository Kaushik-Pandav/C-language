#include<stdio.h>
void cube(int ar[][],int b)
{
    for(int i=0;i<b;i++)
    {
        for(int j=0;j<b;j++)
        {
            ar[i][j] = ar[i][j]*ar[i][j]*ar[i][j];
        }
    }
}
int main()
{
    int n;
    printf("enter  array size: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter element at a[%d][%d]: ",i,j);   
            scanf("%d",&arr[i][j]);
        }
    }
    cube(arr[n][n],n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}