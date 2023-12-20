#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int search,b=0;
    scanf("%d",&search);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(search==mat[i][j])
            b++;
        }
    }
    if(b>0) printf("1");
    else printf("0");
}