#include<stdio.h>
void div()
{
    int a;
    printf("Enter the a number: ");
    scanf("%d", &a);
    if(a%15==0)
    {
        printf("The number is divisible by both 3 and 5.\n");
    }
    else
    {
        printf("The number is not divisible by both 3 and 5.\n");
    }
}
int main()
{
    div();
}