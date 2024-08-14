#include<stdio.h>
int main()
{
    int l=0;
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]",&str);
    int *ptr[100];
    for(int i=0;str[i]!='\0';i++)
    {
        ptr[i]=&str[i];
    }
    for(int i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("lenth of string is %d",l);
}
