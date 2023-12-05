#include <stdio.h>
int main()
{
    int n,a=0,b=1,c=0;
    scanf("%d",&n);
    while(c<=n)
    {
        a=b;
        b=c;
        c=a+b;
    }
        if(n==a||n==b||n==c)
        printf("True");
        else
        printf("False");
}