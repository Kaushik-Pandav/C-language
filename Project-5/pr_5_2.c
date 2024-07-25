#include<stdio.h>
int main()
{
    int r,c,l=0;
    printf("enter number of row ");
    scanf("%d",&r);
    printf("enter number of column ");
    scanf("%d",&c);
    int a[r][c];
    printf("enter the elements of array \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
            if(a[i][j]>l)
            {
                l=a[i][j];
            }
        }
    }
    printf("largest element is : %d",l);
}