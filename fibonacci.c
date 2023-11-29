#include <stdio.h>
int main()
{
    int n,a,b,c=0;
    scanf("%d",&n);
    a=0;
    b=1;
    while(n>0)
    {
        printf("%d ",c);
        n--;
        a=b;
        b=c;
        c=a+b;
    }
}