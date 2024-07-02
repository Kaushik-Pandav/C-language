#include<stdio.h>
#define P printf

int main() {
     int a,b,c,d,e,f;
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
     P("enter f:");
     scanf("%d",&f);
     if(a>b)
     {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    if(a>f)
                    {
                        P("a is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
                else
                {
                    if(e>f)
                    {
                        P("e is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
            }
            else
            {
                if(d>e)
                {
                    if(d>f)
                    {
                        P("d is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
                else
                {
                    if(e>f)
                    {
                        P("e is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
            }
        }
        else
        {
            if(c>d)
            {
                if(c>e)
                {
                    if(c>f)
                    {
                        P("c is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
                else
                {
                    if(e>f)
                    {
                        P("e is big");
                    }   
                    else
                    {
                        P("f is big");
                    }
                }
            }
            else
            {
                if(d>e)
                {
                    if(d>f)
                    {
                        P("d is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
                else
                {
                    if(e>f)
                    {
                        P("e is big");
                    }
                    else
                    {
                        P("f is big");
                    }
                }
            }
        }
     }
     else
     {
        if(b>c)
        {
           
        }
     }
}
