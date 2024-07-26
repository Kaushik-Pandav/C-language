#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a word :");
    scanf("%[^\n]",&str);

    for(int i=0;i<100;i++)
    {
        if(str[i] >=97 && str[i] <=122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Uppercase word: %s",str);
}