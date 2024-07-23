#include<stdio.h>
int main()
{
    int n;
    printf("enter size of array-a:");
    scanf("%d", &n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                continue;
            }
            else
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
}