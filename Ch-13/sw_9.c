#include<stdio.h>
int main()
{
    int n,k;
    printf("enter the lenth of array: ");
    scanf("%d",&n);
    int a[n],b[n-1];
    printf("enter the elements \n");
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
        b[i]=0;
    }
    printf("enter the position to delete: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(i!=k)
        {
            b[i]=1;
        }
        else 
        {
             continue;
        }
    }
    printf("the new array is :");
    for(int i=0;i<n;i++)
    {
        if(b[i]==1)
        {
            printf("%d ",a[i]);
        }
        else
        {
            continue;
        }        
    }
}