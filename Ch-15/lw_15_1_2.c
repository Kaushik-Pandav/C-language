#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a word :");
    scanf("%[^\n]",&str);

    for(int i=0;i<100;i++)
    {
        if(str[i] >=65 && str[i] <=90)
        {
            str[i] = str[i] + 32;
        }
    }
    printf("Lowercase word: %s",str);
}
