#include<stdio.h>
int main()
{
    int n1;
    printf("enter the lenth of both Array's: ");
    scanf("%d",&n1);
    int A[n1],B[n1],C[n1];
    
        for(int i=0;i<n1;i++)
        {
            printf("enter A[%d]: ",i);
            scanf("%d",&A[i]);
        }
        for(int i=0;i<n1;i++)
        {
            printf("enter B[%d]: ",i);
            scanf("%d",&B[i]);
        }
        for(int i=0;i<n1;i++)
        {
            C[i]=A[i]+B[i];
        }
        printf("the third array-C is int C[%d]={",n1);
        for(int i=0;i<n1;i++)
        {
            printf("%d",C[i]);
            if(i==n1-1)
            {
                continue;
            }
            printf(",");
        }
        printf("}\n");   
}