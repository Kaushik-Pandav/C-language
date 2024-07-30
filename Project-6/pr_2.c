#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    int str2[100];
    int c;
    printf("Enter a Word: ");
    scanf("%[^\n]",str1);
    int l=strlen(str1);
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
                str2[j]=1;
            }
        }
        if(str2[i]==0)
        {
            printf("The Character %c is appear %d times\n",str1[i],c);
        }
    }
}