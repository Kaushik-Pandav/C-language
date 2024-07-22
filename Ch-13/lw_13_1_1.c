#include<stdio.h>
int main()
{
    int n,l=0;
    printf("enter the size of array:");
    scanf("%d", &n);
    int k[n];
    for(int i=0; i<n; i++)
    {
        printf("enter k[%d]:",i);
        scanf("%d", &k[i]);
        l++; 
    }
    printf("the lenth of given array is %d", l);
}