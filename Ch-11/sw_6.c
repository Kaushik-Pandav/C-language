#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            (i%2==0)
                ?(j%2!=0)
                    ?printf("0 ")
                    :printf("1 ")
                :(j%2==0)
                    ?printf("0 ")
                    :printf("1 ");
        }
        printf("\n");
    }
}