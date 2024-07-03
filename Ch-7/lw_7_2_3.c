#include<stdio.h>
#define P printf

int main(){
     int a,b,c,d,e;
     P("enter a:");
     scanf("%d",&a);
     P("enter b:");
     scanf("%d",&b);
     P("enter c:");
     scanf("%d",&c);
     P("enter d:");
     scanf("%d",&d);
     P("enter e:");
     scanf("%d",&e);

    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                
                {
                    P("a is big");
                }
                else
                {
                    P("b is big");
                }
            }
            else
            {
                if(d>e)
                {
                    P("d is big");
                }
                else
                {
                    P("e is big");
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    P("c is big");
                }
                else
                {
                    P("e is big");
                }
            }
            else
            {
                if(d>e)
                {
                    P("d is big");
                }
                else
                {
                    P("e is big");
                }
            }
        }
    }     
    else
    {
        if(b>c)
        {
            if(b>d)
            {
                if(b>e)
                {
                    P("b is big");
                }
                else
                {
                    P("e is big");
                }
            }
            else
            {
                if(d>e)
                {
                    P("d is big");
                }
                else
                {
                    P("e is big");
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    P("c is big");
                }
                else
                {
                    P("e is big");
                }
            }
            else
            {
                if(d>e)
                {
                    P("d is big");
                }
                else
                {
                    P("e is big");
                }
            }
        }
    }
}
