#include<stdio.h>
int main()
{
    FILE *p=fopen("data3.txt", "w");
    for(int i=1;i<=50;i++)
    {
        if(i%3==0 && i%5==0)
        {
            fprintf(p, "%d\n", i);
        }
    }
    fclose(p);
}