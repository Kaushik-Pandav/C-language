#include<stdio.h>
int main()
{
    int n,max=0,min;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements: ");
    for(int i=0; i<n; i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0,i<n;i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                min=a[i];
            }
        }
    }
    printf("Largest element: %d\n",max);
    printf("Smallest element: %d\n",min);
}