#include<stdio.h>
int main()
{
    int n,c=1;
    printf("enter lenth:");
    scanf("%d",&n);
    int a[n],f[n];
    for(int i=0; i<n; i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);
        f[i]=0;
    }
    for(int i=0;i<n;i++)
    {  c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                f[j]=-1;
            }
        }
        if(f[i]!=-1)
        {
            printf("number %d is repeated %d times\n",a[i],c);
        }
    }
}