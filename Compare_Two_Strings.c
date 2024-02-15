#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char str2[100];
    scanf("%s%s",str1,str2);
    int n=strcmp(str1,str2);
    if(n==0)
    {
        printf("Strings are Equal");
    }
    else if(n!=0) 
    {
        printf("Strings are not Equal");
    }
}