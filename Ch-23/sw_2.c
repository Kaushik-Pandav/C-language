#include<stdio.h>
int main()
{
    FILE *p=fopen("s1.txt", "r");
    char str[1000];
    for(int i=0;i<1000;i++)
    {
        fscanf(p, "%[^\n]",str[i]);
    }
    for(int i=0;i<1000;i++)
    {
        printf("%[^\n]",str[i]);
    }
}