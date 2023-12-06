#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        for(i=n;i>=1;i--)
        {
            if(i<=j)
            printf("* ");
        }
        printf("
");
    }
}