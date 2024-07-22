#include<stdio.h>
int main()
{
    int n;
    printf("Enter the lenth of array-A:");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        printf("enter A[%d]:",i);
        scanf("%d",&A[i]);
    }
    printf("the Array A is {");
    for(int i=0;i<n;i++)
    {
        printf("%d,",A[i]);
    }
    printf("}\n");
    printf("the reverse of Array B is {");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d,",A[i]);
    }
    printf("}\n");
}