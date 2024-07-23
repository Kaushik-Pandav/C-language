#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter a lenth of array-A: ");
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        printf("enter A[%d]: ",i);
        scanf("%d",&A[i]);
    }
    for(int j=0 ;j<n;j++)
    {
        for(int i=j+1;i<n;i++)
        {
            if(A[j]==A[i])
            {
                c++;
            }
        }
    }
    printf("Number of duplicate elements: %d",c);
}