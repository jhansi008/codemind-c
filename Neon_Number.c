#include <stdio.h>
int main()
{
    int n,m,rev=0,sum=0;
    scanf("%d",&n);
    m=n*n;
    while(m>0)
    {
       rev=m%10;
       sum=sum+rev;
       m=m/10;
    }
       if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}