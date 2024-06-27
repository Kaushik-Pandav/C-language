#include<stdio.h>
#include<conio.h>
main(){
	int a,b;
	clrscr();
	printf("enter the first angle:");
	scanf("%d",&a);
	printf("enter the second angle:");
	scanf("%d",&b);
	printf("the remaining angle is %d",180-a-b);
	getch();
}