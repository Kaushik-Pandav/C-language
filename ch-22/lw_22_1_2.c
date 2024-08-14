#include<stdio.h>
struct details 
{
    int id; 
    char name[50];
    int age;
    char role[100];
    char city[100];
    int exp;
    char cpyname[50];
};
int main()
{
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct details e[n];
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("ID: ");
        scanf("%d", &e[i].id);
        printf("Name: ");
        scanf("%s", &e[i].name);
        printf("Age: ");
        scanf("%d", &e[i].age);
        printf("Role (C/E): ");
        scanf(" %s", &e[i].role);
        printf("City: ");
        scanf(" %s", &e[i].city);
        printf("Experience: ");
        scanf("%d", &e[i].exp);
        printf("Company Name: ");
        scanf("%s", &e[i].cpyname);
    }
    printf("\nEmployee Details:\n");
    for(int i = 0; i < n; i++)
    {
        printf("\nEmployee %d:\n", i+1);
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Age: %d\n", e[i].age);
        printf("Role: %s\n", e[i].role);
        printf("City: %s\n", e[i].city);
        printf("Experience: %d\n", e[i].exp);
        printf("Company Name: %s\n", e[i].cpyname);
    }
}