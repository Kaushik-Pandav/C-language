#include<stdio.h>
int main(){
    for(int i=1;i<=5;i++)
    {
        for(int s=1;s<=5-i;s++)
        {
            printf("  ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
    printf("\n");
    }
}