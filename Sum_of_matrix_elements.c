#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int i,j,mat[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+mat[i][j];
        }
    }
    printf("%d",sum);
}