#include <stdio.h>
int main()
{
    int hf,spf,sf;
    scanf("%d%d%d",&hf,&spf,&sf);
    if(hf>50&&spf>60&&sf>100)
    printf("10");
    else if(hf>50&&sf>100&&spf<60)
    printf("7");
    else if(hf<50&&spf>60&&sf>100)
    printf("8");
    else if(hf>50&&spf>60&&sf<100)
    printf("9");
    else if(hf>50||spf>60||sf>100)
    printf("6");
    else
    printf("5");
}