#include <stdio.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2;
    float dis;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    dis=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.4f",dis);
}