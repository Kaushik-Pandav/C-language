#include<stdio.h>
int main()
{
    int r,c,sum=0,r1,c1,sum1=0;
    printf("enter row: ");
    scanf("%d",&r);
    printf("enter column: ");
    scanf("%d",&c);
    int a[r][c];
    printf("Enter elements of matrix: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered matrix is: \n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("enter the row number: ");
    scanf("%d",&r1);
    if(r1>r)
    {
        printf("Invalid row number!\n");
    }
    else
    {
    printf("Values in the %d row: ",r1);
    for(int i=0;i<r;i++)
     {   
        for(int j=0;j<c;j++)
        {
            if(i==r1-1)
            {
                printf("%d ",a[i][j]);
                sum=sum+a[i][j];
            }
        }
     }
    printf("\nsum of elements in row %d: %d\n",r1,sum);
    }
    printf("enter the column number:");
    scanf("%d",&c1);
    if(c1>c)
    {
        printf("Invalid column number!\n");
    }
    else
    {
    printf("Values in the %d column:",c1);
    for(int i=0;i<r;i++)
    {   
        for(int j=0;j<c;j++)
        {
            if(j==c1-1)
            {
                printf("%d ",a[i][j]);
                sum1=sum1+a[i][j];
            }
        }
    }
    printf("\nsum of elements in column %d: %d",c1,sum1);
    }
}