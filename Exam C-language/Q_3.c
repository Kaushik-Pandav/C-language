#include<stdio.h>

void rev(int a[],int n)
{
    for(int i=n-1;i>=0;i--)
    {
        printf("%d , ", a[i]);
    }
    printf("\n");
}
int sum(int a[],int n)
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
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: \n");
    for(int i=0;i<n;i++)
    {
        printf("a[%d] =", i);
        scanf("%d", &a[i]);
    }
    printf("Reversed array: ");
    rev(a, n);
    int s=sum(a, n);
    printf("Sum of all elements is : %d", s);
}