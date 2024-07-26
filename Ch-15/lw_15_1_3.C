#include<stdio.h>
int main()
{
    char name[100];
    printf("enter Name for Toggle: ");
    scanf("%[^\n]",name);

    for (int i = 0; i < 100; i++)
    {
        if(name[i] >=65 && name[i] <= 90)
        {
            name[i]=name[i]+32;
        }
        else if(name[i]>=97 && name[i]<=122)
        {
            name[i]=name[i]-32;
        }
    }
    printf("afetr Toggle Name is %s",name);
}