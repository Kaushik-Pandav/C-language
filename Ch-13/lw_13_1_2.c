#include<stdio.h>
int main()
{
    int n,sum=0,l=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int k[n];
    for(int i=0;i<n;i++)
    {
        printf("enter k[%d]: ",i);
        scanf("%d",&k[i]);
        sum=sum + k[i];
        l++;
    }
    printf("Avg of our array is %d",sum/l);
}