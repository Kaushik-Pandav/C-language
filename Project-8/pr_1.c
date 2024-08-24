#include <stdio.h>

int main() {
    int l=0;
    char s[100];
     int *p[100];
    for(int i=0;i<100;i++)
    {
        p[i]=&s[i];
    }
    printf("Enter a string : ");
    scanf("%[^\n]",&s);
    for(int i=0;*p[i]!='\0';i++)
    {
        l++;
    }
    printf("lenth of string is %d",l);
}
