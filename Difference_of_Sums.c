#include <stdio.h>
int main()
{
    int n,i,b,a=0,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        a=a+(i*i);
        sum=sum+i;
        b=sum*sum;
    }
    printf("%d",b-a);
}