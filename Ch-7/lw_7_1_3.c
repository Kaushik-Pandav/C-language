#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter Maths mark(out of 100):");
    scanf("%f",&a);
    printf("Enter Science mark(out of 100):");
    scanf("%f",&b);
    printf("Enter Gujarati mark(out of 100):");
    scanf("%f",&c);
    d=(a+b+c)/3;
    printf("Your Average Mark is %.2f",d);
}