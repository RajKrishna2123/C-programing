#include <stdio.h>
#include<stdlib.h>
int main()
{
    char str[20];
    int i;
    scanf("%[^\n]s", str);
    printf("%s",str);
    // for(i=0;i<sizeof(str);i++)
    // {
    //     printf("%c",str[i]);
    // }
}