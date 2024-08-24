#include <stdio.h>

void cube(int a,int *p[a][a])
{
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<a;j++)
        {
            *p[i][j]=((*p[i][j]) * (*p[i][j]) * (*p[i][j]));
        }
    }
}
int main() {
    int n;
    printf("enter the size of 2D array: ");
    scanf("%d",&n);
    int a[n][n];
    int *p[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            p[i][j]=&a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("enter a[%d][%d]=",i,j);
            scanf("%d",p[i][j]);
        }
    }
    cube(n,p);
    printf("Cube of this array is : \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",*p[i][j]);
        }
        printf("\n");
    }
