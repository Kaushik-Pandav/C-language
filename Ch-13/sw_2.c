#include<stdio.h>
int main()
{
    int n;
    printf("Enter a lenth of array-A: ");
    scanf("%d",&n);
    int A[n],B[n];
    for(int i=0;i<n;i++)
    {
        printf("enter A[%d]: ",i);
        scanf("%d",&A[i]);
        B[i]=A[i];
    }
    printf("Array -A: {");
    for(int i=0;i<n;i++)
    {
        printf("%d,",A[i]);
    }
    printf("}\n");
    printf("Array -B: {");
    for(int i=0;i<n;i++)
    {
        printf("%d,",B[i]);
    }
    printf("}\n");
}