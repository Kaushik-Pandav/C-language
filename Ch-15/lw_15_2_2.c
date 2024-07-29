#include<stdio.h>
#include<string.h>

int  main()
{
    char e1[100],e2[100],p1[100],p2[100];
    printf("enter your email:");
    scanf("%s",&e1);
    printf("enter your password:");
    scanf("%s",&p1);
    e2[100] == "Admin123@gmail.com";
    p2[100] == "Admin@123";
    int ans1 = strcmp(e1,e2);
    int ans2 = strcmp(p1,p2);
    if(ans1 == 0 && ans2 == 0)
    {
        printf("Login Successful");
    }
    else
    {
        printf("Opps ! Invalid Credentials");
    }
}