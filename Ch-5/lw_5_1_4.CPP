#include<stdio.h>
#include<conio.h>

main(){
	int a,b,c;
	clrscr();
	printf("enter the value of first integer:");
	scanf("%d",&a);
	printf("enter the value of second integer:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("after swaping values are %d  %d",a,b);
	getch();
}
