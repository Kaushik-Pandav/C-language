#include<stdio.h>
#include<conio.h>
main(){
	float a,b,c,d;
	clrscr();
	printf("enter your basic salary:");
	scanf("%f",&a);
	printf("enter your HRA(in perc):");
	scanf("%f",&b);
	printf("enter your DA(in perc):");
	scanf("%f",&c);
	printf("enter your TA(in perc):");
	scanf("%f",&d);
	printf("your gross salary is %.2f",a+(0.01*a*b)+(0.01*a*c)+(0.01*a*d));
	getch();
}
