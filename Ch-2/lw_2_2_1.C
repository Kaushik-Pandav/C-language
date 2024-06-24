#include<stdio.h>
#include<conio.h>
#define P 3.14

main(){
	float a;
	clrscr();
	printf("Enter the Radius :");
	scanf("%f",&a);
	printf("Area of Circle is %.2f",P*a*a);
	getch();

}