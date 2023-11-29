#include <stdio.h>
int main()
{
    int n,m,rev=0,ver=0,sum=0,product=1;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
    	rev=n%10;
    	sum=sum+rev;
    	n=n/10;
	}
	while(m>0)
	{
		ver=m%10;
		product=product*ver;
		m=m/10;
	}
      if(sum==product)
      {
          printf("Spy Number");
      }
      else
      {
          printf("Not Spy Number");
      }
}