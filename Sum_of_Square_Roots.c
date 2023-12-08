#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i;
    float s,sum=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        s=sqrt(i);
        sum=sum+s;
    }
    printf("%.2f",sum);
}