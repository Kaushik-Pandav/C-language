#include<stdio.h>
#include<conio.h>
main(){
	int a,b;
	clrscr();
	printf("enter the value of first integer:");
	scanf("%d",&a);
	printf("enter the value of seconf integer:");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("value after swaping is %d and %d",a,b);
	getch();
	}