#include "f.c"
int main()
{
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for modulo\n");
    printf("press 0 for exit\n");
    int a=getint("a");
    int p=getint("Process");
    int b=getint("b");
    switch(p)
    {
        case 1:
            printf("Addition of %d and %d is %d\n", a,b,getsum(a,b));
            break;
        case 2:
            printf("Subtraction of %d and %d is %d\n",a,b,getsub(a,b));
            break;
        case 3:
            printf("Multiplication of %d and %d is %d\n",a,b,getmul(a,b));
            break;
        case 4:
            printf("Division of %d and %d is %.2f\n",a,b,getdiv(a,b));
            break;
        case 5:
            printf("modulo of %d and %d is %d\n",a,b,getmod(a,b));
            break;
        case 0:
            printf("Thank You!\n");
        default:
            printf("Please Enter a valid process");
            break;
    }
}