#include<stdio.h>

int getint()
{
    int n;
    printf("enter a number");
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

int array()
{
    int n=getint();
    int a[n];
    for(int i=0; i<n;i++)
    {
        printf("enter a[%d]",i);
        scanf("%d",&a[i]);
    }
    return a[n];
}

int max()
{
    int l=0;
    int n=getint();
    int b[n]=array();
    for(int i=0; i<n; i++)
    {
        if(b[i]>l)
        {
            l=b[i];
        }
    }
    return l;
}
