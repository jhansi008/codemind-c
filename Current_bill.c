#include <stdio.h>
int main()
{
    int n;
    float c,ta;
    scanf("%d",&n);
    if(n<=199)
   { 
    c=n*1.20;
    ta=c+100;
   }
    else if(n>=200&&n<=400)
   {
       c=n*1.50;
    ta=c+100;
   }
    else if(n>=400&&n<=600)
   {
       c=n*1.80;
    ta=c+(0.15*c);
   }
    else
    {
        c=n*2.00;
    ta=c+(0.15*c);
    }
   { printf("%.2f",ta);}
}