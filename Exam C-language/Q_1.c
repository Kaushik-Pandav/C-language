#include<stdio.h>
int main()
{
    int n,a,b;
    do{
        printf("for Addition press 1\n");
        printf("For Substract press 2\n");
        printf("For Multiplication press 3\n");
        printf("For Division press 4\n");
        printf("for exit press 0\n");
        printf("Enter first number :");
        scanf("%d",&a);
        printf("Enter Process : ");
        scanf("%d",&n);
        printf("Enter second number : ");
        scanf("%d",&b);
        switch(n)
        {   
            case 1: 
                printf("Addition of %d and %d is %d",a,b,a+b); 
                break;
            case 2: 
                printf("Substraction of %d and %d is %d",a,b,a-b); 
                break;
            case 3: 
                printf("Multiplication of %d and %d is %d",a,b,a*b); 
                break;
            case 4: 
                if(b!=0)
                {
                    printf("Division of %d and %d is %f",a,b,((float)a/b));
                }
                else
                {
                    printf("Error! Division by zero is not allowed.");
                }
                break;
            case 0:
                printf("Thank you for using this .......\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n"); 
    }
    }while(n!=0);     
}