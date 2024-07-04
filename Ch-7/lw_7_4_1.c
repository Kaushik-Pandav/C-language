#include<stdio.h>
#define P printf
int main(){
    int a,b,c;
    printf("enter a , b & c");
    scanf("%d%d%d",&a,&b,&c);
    (a<b)
        ?(a<c)
            ?P("%d is small",a)
            :P("%d is small",c)
        :(b<c)
            ?P("%d is small",b)
            :P("%d is small",c);

}