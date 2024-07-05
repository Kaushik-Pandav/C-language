#include<stdio.h>
int main() {
    int a;
    char z='P';
    printf("enter your marks(out of 100)");
    scanf("%d",&a);
    (a>=91&& a<100)
             ?z='A'
             :(a>=71 && a<90)
                ?z='B'
                :(a>=61 && a<70)
                    ?z='C'
                    :(a>=51 && a<60)
                        ?z='D'
                        :(a>=33 && a<50)
                            ?z='E'
                            :(a>=0 && a<33)
                                ?z='F'
                                :printf("invalid");
    printf("your grade is %c",z);
    switch(z)
    {
        case 'A':
            printf(" Excellent.");
            break;
        case 'B':
            printf(" Very Good.");
            break;
        case 'C':
            printf(" Good.");
            break;
        case 'D':
            printf(" Keep it up.");
            break;
        case 'E':
            printf(" Nice Try.");
            break;
        case 'F':
            printf(" Opps,You have to try again.");
            break;
        default:
            printf(" Opps,You have to try again.");
     }

    if(z=='F')
    {
       printf(" You are not eligible for Next round!!!!!!!");
    }
    else
    {
      printf(" Congralutation You are eligible for Next Round!!!!!");
    }
}                               