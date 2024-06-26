#include<stdio.h>
#include<conio.h>

main(){
	int a,b;
	clrscr();
	printf("enter the value of first integer:");
	scanf("%d",&a);
	printf("enter the value of second integer:");
	scanf("%d",&b);
	printf("the value of cube of sum of both integer is %d",(a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b));
	getch();
}