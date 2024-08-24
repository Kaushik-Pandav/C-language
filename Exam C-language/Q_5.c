#include<stdio.h>
int main()
struct book {
    char t[100];
    char a[100];
    int p;
};
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    struct book b[n];
    for(int i=0; i<n; i++) 
    {
        printf("Enter book title: ");
        scanf("%s", &b[i].t);
        printf("Enter book author: ");
        scanf("%s", &b[i].a);
        printf("Enter book price: ");
        scanf("%d", &b[i].p);
    }
    printf("\nBook Details:\n");
    for(int i=0; i<n; i++)
    {
        printf("Book %d:\n", i+1);
        printf("Book title: %s\n", b[i].t);
        printf("Book author: %s\n", b[i].a);
        printf("Book price: %d\n", b[i].p);
        printf("\n");
    }
}