#include<stdio.h>
int main(){
    char i='a';
    do{
        printf("%c ",i);
        i=i+4;
    }while(i<='z');
}