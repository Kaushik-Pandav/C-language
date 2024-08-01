#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100], str2[100];
    printf("enter your sentence\n");
    scanf("%[^\n]",&str1);
    int l=strlen(str1);
    int c=1,la=0;
    for(int i=0;i<l;i++)
    {
        str2[i]=0;
    }
    for(int i=0;i<l;i++)
    {   c=1;
        for(int j=i+1;j<l;j++)
        {
            if(str1[i]==str1[j])
            {
                c++;
                str2[i]=c;    
            }
        }
    }
    for(int i=0;i<l;i++)
    {
        if(str2[i]>la)
        {
            la=str2[i];
        }
    }
    for(int i=0;i<l;i++)
    {
        if(str2[i]==la)
        {
            printf("%c repeats %d times\n",str1[i],la);
        }
    }
}