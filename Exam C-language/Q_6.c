#include<stdio.h>


int main()
{
    FILE *p=fopen("Data.txt", "w");
    char name[100];
    char role[100];
    for(int i=0; i<3;i++)
    {
        printf("Enter Details for Employee No. %d\n", i+1);
        printf("Name: ");
        scanf("%s", name);
        printf("Role: ");
        scanf("%s", role);
        fprintf(p, "Name= %s, Role = %s\n", name, role);
        printf("\n");
    }
    fclose(p);
    printf("All data has been written in Data.txt file.\n");
}