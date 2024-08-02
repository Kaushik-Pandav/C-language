#include<stdio.h>
void cube()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Cube of %d is: %d\n", a, a*a*a);
}
int main()
{
    cube();
}