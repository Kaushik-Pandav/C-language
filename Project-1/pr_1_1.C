#include<stdio.h>
#include<conio.h>
main(){
	float a;
	clrscr();
	printf("enter the Tempeture in Celcius:");
	scanf("%f",&a);
	printf("Tempeture in F is %0.2f",(1.8*a)+32);
	getch();
}