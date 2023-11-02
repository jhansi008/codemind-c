#include <stdio.h>
int main()
{
	int i,n,r,m;
	scanf("%d%d%d",&n,&r);
	for(i=1;i<=r;i++)
	{
		m=n*i;
		printf("%d x %d = %d
",n,i,m);
	}
}