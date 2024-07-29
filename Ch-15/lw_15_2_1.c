#include<stdio.h>
#include<string.h>
int main()
{
    int up=0,lw=0,dig=0,sp=0;
    char pw[100];
    printf("enter your password : ");
    scanf("%[^\n]",&pw);

    int l=strlen(pw);
    for(int i=0;i<l;i++)
    {
        if(pw[i]>=65 && pw[i]<=90)
        {
            up++;
        }
        else if(pw[i]>=97 && pw[i]<=122)
        {
            lw++;
        }
        else if(pw[i]>=47 && pw[i]<=57)
        {
            dig++;
        }
        else
        {
            sp++;
        }
    }
    if (l>=6)
    {
    if(up !=0 && lw !=0 && dig !=0 && sp !=0)
        {
            printf("Your Password is very strong ");
        }
    else if(up !=0 && lw !=0 && dig !=0 && sp==0)
        {
            printf("Your Password is moderately strong \n");
            printf("there is no special characters in your password");
        }
    else if(up !=0 && lw !=0 && dig ==0 && sp==0)
        {
            printf("Your Password is moderately strong \n");
            printf("there is no special characters and digit in your password");
        }
    else if(up !=0 && lw ==0 && dig ==0 && sp==0)
        {
            printf("Your Password is moderately strong \n");
            printf("there is no special characters,no lowercase characters and digit in your password");
        }
    else 
        {
            printf("this password is invalid ");
        }
    }
    else
    {
        printf("Your password must have minimum 6 characters");
    }
}