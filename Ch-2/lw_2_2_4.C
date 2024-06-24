#include<stdio.h>
#include<conio.h>

main(){
      float p,r,n;
      clrscr();
      printf("Enter your principal amount\t:");
      scanf("%f",&p);
      printf("Enter your Intrest Rate\t\t:");
      scanf("%f",&r);
      printf("Enter Your Time Duration (in Months)\t:");
      scanf("%f",&n);
      printf("Your Simple Intrest is %.2f",p*r*n/100);
      getch();
}