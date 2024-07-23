#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the lenth of array a:");
    scanf("%d",&n1);
    int a[n1];
    for(int i=0;i<n1;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the lenth of array b:");
    scanf("%d",&n2);
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        printf("enter b[%d]: ",i);
        scanf("%d",&b[i]);
    }
    int n3=n1+n2;
    int c[n3];
    for(int i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(int i=n1;i<n3;i++)
    {
        c[i]=b[i-n1];
    }
    printf("the merged array-c in desc. order is :\n");
    for(int i=0;i<n3;i++)
    {
        for(int j=i;j<n3;j++)
        {
            if(c[i]<c[j])
            {
                c[i]=c[i]+c[j];
                c[j]=c[i]-c[j];
                c[i]=c[i]-c[j];
            }
        }
    }
    for(int i=0;i<n3;i++)
    {
        printf("%d ",c[i]);
    }
}