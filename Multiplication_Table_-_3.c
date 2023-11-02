#include <stdio.h>
int main()
{
	int i,n,r,s,m;
	scanf("%d%d%d",&n,&r,&s);
	for(i=r;i<=s;i++)
	{
		m=n*i;
		printf("%d x %d = %d
",n,i,m);
	}
}