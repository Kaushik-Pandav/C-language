#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int s=i;s<=4;s++)
        {
            printf("  ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(int j=i-1;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

}