#include<stdio.h>
int main()
{
    int l=0,cmp=0;
    char str1[100],str2[100];
    printf("Enter a Name: ");
    scanf("%s",str1);
    for(int i=0;str1[i]!=NULL;i++)
    {
        l++;
    }
    l-=1;
    for(int i=0;i<l;i++)
    {
        str2[i]=str1[l-i];
    }
    for(int i=0;i<l;i++)
    {
        if(str1[i]!=str2[i])
        {
            cmp++;
        }
    }
    if(cmp==0)
    {
        printf("the entered string is pelindrome");
    }
    else
    {
        printf("the entered string is not pelindrome");
    }
}