#include<stdio.h>
int main()
{
    int r,c,sum=0,d=0;
    printf("enter the rows:");
    scanf("%d",&r);
    printf("enter the columns:");
    scanf("%d",&c);
    int a[r][c];
    d=r*c;
    printf("Enter the elements of the matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
            sum=sum+a[i][j];
        }
    }
    float avg=(float)sum/(float)d;
    printf("the avg is %0.2f",avg);
}