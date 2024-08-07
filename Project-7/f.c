#include<stdio.h>
int getsum(int a,int b)
{
    return a+b;
}
int getsub(int a,int b)
{
    return a-b;
}
int getmul(int a,int b)
{
    return a*b;
}
float getdiv(int a,int b)
{
    float s;
    if(b!=0)
    {
        s=(float)a/(float)b;
        return s;
    }
    else
        return -1;
}
int getmod(int a,int b)
{
    if(b!=0)
        return a%b;
    else
        return -1;
}
int getint(name)
{
    int num;
    printf("Enter the %s: ",name);
    scanf("%d",&num);
    return num;
}