#include<stdio.h>
int main()
{
    FILE *p=fopen("data.txt", "r");
    FILE *p2=fopen("data2.txt", "w");
    int a,b,c;
    fscanf(p,"%d",&a);
    fscanf(p,"%d",&b);
    fscanf(p,"%d",&c);   
    fprintf(p2,"%d\n",a);
    fprintf(p2,"%d\n",b);
    fprintf(p2,"%d\n",c);
    fclose(p);
    fclose(p2);   
}
