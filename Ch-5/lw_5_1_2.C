#include<stdio.h>
#include<conio.h>

main(){
	int a,b;
	clrscr();
	printf("enter the value of first integer:");
	scanf("%d",&a);
	printf("enter the value of second integer:");
	scanf("%d",&b);
	printf("the answer is:%d",(a*a)-(2*a*b)+(b*b));
	getch();

}