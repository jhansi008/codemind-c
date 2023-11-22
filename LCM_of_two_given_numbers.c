#include <stdio.h>
int main()
{
    int i,n,m;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        if(m*i%n==0)
        {
            printf("%d",m*i);
            break;
        }
    }
}