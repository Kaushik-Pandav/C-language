#include<stdio.h>
struct student
{
    int no;
    char name[100];
    int m1;
    int m2;
    int m3;
    float total;
};
int main()
{
    printf("input\n");
    struct student s[5];
    for(int i = 0; i < 5; i++)
    {
        printf("Enter Student No %d\n", i+1);
        printf("Enter Student Roll no :");
        scanf("%d", &s[i].no);
        printf("Enter Student Name :");
        scanf("%s",&s[i].name);
        printf("Enter Chemistry Marks :");
        scanf("%d", &s[i].m1);
        printf("Enter Mathematics Marks :");
        scanf("%d", &s[i].m2);
        printf("Enter Physics Marks :");
        scanf("%d", &s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        printf("\n");
    }
    printf("\nStudent Details\n");
    for(int i=0;i<5;i++)
    {
        printf("%s",s[i].name);
        printf("(%d)\n", s[i].no);
        printf("Chemistry: %d\n", s[i].m1);
        printf("Mathematics: %d\n", s[i].m2);
        printf("Physics: %d\n", s[i].m3);
        printf("Total : %0.1f / 300\n",s[i].total);
        printf("Percentage : %.2f\n",(s[i].total)/3);
        printf("----------------------------------------------------------------");
        printf("\n");
    }
}