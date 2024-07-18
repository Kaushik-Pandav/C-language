#include<stdio.h>
int main(){   
     for(int i=5;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(int s=4;s>=i;s--)
        {
            printf(" ");
        }
        for(int s=i;s<=4;s++)
        { 
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}