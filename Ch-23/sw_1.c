#include<stdio.h>
int main()
{
    FILE *p=fopen("s1.txt", "w");
    char str[100]="Hello line No. ";
    for(int i=1;i<=4;i++)
    {
        fprintf(p,"%s" "%d \n",str,i);
    }
}
