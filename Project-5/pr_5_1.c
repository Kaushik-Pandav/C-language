#include<stdio.h>
int main()
{
    int n,l=0;   
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
        if(a[i]<0)
        {
            l++;
        }
    }
    if(l!=0)
    {
    printf("Negative numbers in the array are: ");
    for(int i=0;i<n;i++)
      {
        if(a[i]<0)
        {
            printf("%d ",a[i]);
        }
     }
    }
    else
    {
        printf("No nagative numbers in the array");
    }
}