#include<stdio.h>
#include<conio.h>

main(){
	int a,b;
	clrscr();
	printf("enter the first integer:");
	scanf("%d",&a);
	printf("enter the seconf integer:");
	scanf("%d",&b);
	printf("the value is %d",(a*a)+(2*a*b)+(b*b));
	getch();
}
