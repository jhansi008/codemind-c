#include <stdio.h>
int main()
{
    int i,n,facts=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           facts=facts+i; 
        }
    }
    if(facts>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}