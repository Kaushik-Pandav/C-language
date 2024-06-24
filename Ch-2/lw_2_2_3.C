#include<stdio.h>
#include<conio.h>

main(){
	float a,b;
	clrscr();
	printf("enter the base of tri.\t: ");
	scanf("%f",&a);
	printf("enter the hight of tri.\t: ");
	scanf("%f",&b);
	printf("the area of the tri. is %.2f",0.5*a*b);
	getch();
}