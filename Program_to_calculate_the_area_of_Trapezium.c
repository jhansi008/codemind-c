#include <stdio.h>
int main()
{
    int a,b,h;
    float area;
    scanf("%d%d%d",&a,&b,&h);
    area=((a+b)/2.0)*h;
    printf("%.4f",area);
}