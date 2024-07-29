#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    printf("Enter the elements of string :");
    scanf("%s",&str1);
    str2[100] = strrev(str1[100]);
    int ans = strcmp(str1[100],str2[100]);
    if(ans == 0)
    {
        printf("The given string is a palindrome.");
    }
    else
    {
        printf("The given string is not a palindrome.");
    }
}