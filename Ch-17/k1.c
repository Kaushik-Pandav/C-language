#include<stdio.h>

int getint()
{
    int n;
    printf("enter a %s",Name);
    scanf("%d",&n);
    return n;
}

int getsqr()
{
    int n=getint();
    return n*n;
}

int arraymax()
{
    int l=0;
    int n=getint();
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
        if(a[i]>l)
        {
            l=a[i];
        }
    }
    return l;
}
int arr()
{
    int n=getint("lenth");
    int a[n];
    for(int i=0; i<n; i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    return a;
}
int arrsum(int a[],lenth)
{
    int sum=0;
    for(int i=0;i<lenth;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}