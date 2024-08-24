#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int a[n];
    int *p[n];
    for(int i=0;i<n;i++)
    {
        p[i]=&a[i];
    }
    printf("Enter the elements: \n");
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]: ",i);
        scanf("%d",&a[i]);
    }
    printf("Cube of this array is: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ,", (*p[i]) * (*p[i]) * (*p[i]));
    }
}