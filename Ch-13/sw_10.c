#include<stdio.h>
int main()
{
    int n,l1=0,l2=0,k;
    printf("enter n:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d] ",i);
        scanf("%d",&a[i]);
        if(a[i]>l1)
        {
            l1=a[i];
            k=i;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i==k)
        {
            continue;
        }
        else
        {
            if(a[i]>l2)
            {
                l2=a[i];
            }
        }
    }
    printf("the second largest number is %d",l2);
}