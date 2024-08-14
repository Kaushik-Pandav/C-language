#include<stdio.h>
struct Student
{
    int id;
    char name[50];
    int age;
    char course[100];
    char city[100];
    int std;
    char school[100];
};
int main()
{
    struct Student s1;
    for(int i=0;i<3;i++)
    {
        printf("Enter student %d details:\n",i+1);
        printf("ID: ");
        scanf("%d",&s1.id);
        printf("Name: ");
        scanf("%s",s1.name);
        printf("Age: ");
        scanf("%d",&s1.age);
        printf("Course: ");
        scanf("%s",s1.course);
        printf("City: ");
        scanf("%s",s1.city);
        printf("Standard: ");
        scanf("%d",&s1.std);
        printf("School: ");
        scanf("%s",s1.school);
    }
    printf("============================================================================");
    printf("\nStudent Details:\n");
    for(int i=0;i<3;i++)
    {
        printf("Student %d Details:\n",i+1);
        printf("ID: %d\n",s1.id);
        printf("Name: %s\n",s1.name);
        printf("Age: %d\n",s1.age);
        printf("Course: %s\n",s1.course);
        printf("City: %s\n",s1.city);
        printf("Standard: %d\n",s1.std);
        printf("School: %s\n",s1.school);
        printf("\n");
    }
}