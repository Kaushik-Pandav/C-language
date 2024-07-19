#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        if(i==1 || i==3)
        {
            printf("* * * * * \n");
        }
        else if(i==2)
        {
            printf("*       *\n");
        }
        else
        {
            printf("* ");
        }
        printf("\n");
    }
}