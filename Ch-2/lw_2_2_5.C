#include<stdio.h>
#include<conio.h>
#define P 3.14

main(){
    float r;
    clrscr();
    printf("Enter the Value of Radius(in cm): ");
    scanf("%f",&r);
    printf("perimeter of the circle is %0.2f ",P*r*2);
    getch();
}