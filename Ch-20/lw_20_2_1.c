#include<stdio.h>
int main()
{
    int n;
    printf("enter lenth of array: ");
    scanf("%d", &n);
    int a[n];
    int *ptr1[n];
    for(int i=0;i<n;i++)
    {
        ptr1[i] = &a[i];
    }
    int **ptr2[n];
    for(int i=0;i<n;i++)
    {
        ptr2[i] = &ptr1[i];
    }
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",ptr1[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ", (**ptr2[i])*(**ptr2[i]));
    }
}