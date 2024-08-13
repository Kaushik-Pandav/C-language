#include<stdio.h>
int main()
{
    char str1[100];
    int l=0;
    printf("enter a string: ");
    scanf("%[^\n]", &str1);
    int *ptr[100];
    for(int i=0; i<100; i++)
    {
        ptr[i] = &str1[i];
    }
    for(int i=0;*ptr[i]!=NULL;i++)
    {
        l++;
    }
    printf("lenth of the string is %d", l);
}