#include <stdio.h>
int main()
{
    char str[100];
    scanf("%[^
]s",str);
    int count=0;
    for(int i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;
        }
    }
    printf("%d",count);
}