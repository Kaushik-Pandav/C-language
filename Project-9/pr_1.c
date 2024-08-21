#include<stdio.h>
int main()
{
    FILE *p1=fopen("odd.txt", "w");
    FILE *p2=fopen("even.txt", "w");
    for(int i=50;i<=70;i++)
    {
        if(i%2!=0)
            fprintf(p1, "%d ", i);
        else
            fprintf(p2, "%d ", i);
    }
    fclose(p1);
    fclose(p2);
}