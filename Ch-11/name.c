#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=5;i++)
    {
        if(i==1 || i==5)
        {
            printf("*   *\n");
        }
        else if(i==2 || i==4)
        {
            printf("*  *\n");
        }
        else
        {
            printf("* *\n");
        }       
    }
    printf("\n");
    for(i=1;i<=5;i++)
    {
        if (i==1 || i==3)
        {
            printf("*****\n");
        }
        else
        {
            printf("*   *\n");
        }
    }
    printf("\n");
    for(i=1;i<=5;i++)
    {
        if(i==5)
        {
            printf("*****\n");
        }
        else
        {
            printf("*   *\n");
        }
    }
    printf("\n");
    for(i=1;i<=5;i++)
    {
        if(i==1 ||i==3 || i==5)
        {
            printf("*****\n");
        }
        else if (i==4)
        {
            printf("    *\n");
        }
        else
        {
            printf("*\n");
        }
    }
    printf("\n"); 
    for(i=1;i<=5;i++)
    {
        if(i==3)
        {
            printf("*****\n");
        }
        else
        {
            printf("*   *\n");
        }
    }
    printf("\n");
    for(i=1;i<=5;i++)
    {
        if(i==1 || i==5)
        {
            printf("*****\n");
        }
        else
        {
            printf("  *  \n");
        }
    }
    printf("\n");
    for(i=1;i<=5;i++)
    {
        if(i==1 || i==5)
        {
            printf("*   *\n");
        }
        else if(i==2 || i==4)
        {
            printf("*  *\n");
        }
        else
        {
            printf("* *\n");
        }       
    }
}