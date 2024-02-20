#include <stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int mat[r][c],i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    int evensum=0,oddsum=0;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(mat[i][j]%2==0)
            {
                evensum+=mat[i][j];
            }
            else 
            {
                oddsum+=mat[i][j];
            }
        }
    }
    printf("%d %d",evensum,oddsum);
}