#include <stdio.h>
#include <string.h>
int main()
{
   char str[100];
   scanf("%[^
]s",str);
   char des[100];
   printf("%s",strcpy(des,str));
}