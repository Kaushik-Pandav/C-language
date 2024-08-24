#include<stdio.h>
int arrsum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d] =",i);
        scanf("%d",&a[i]);
    }
    int sum=arrsum(a,n);
    printf("Sum of the elements: %d\n",sum);
}