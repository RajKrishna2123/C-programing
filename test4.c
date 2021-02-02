#include<stdio.h>
#include<conio.h>
int main()
{   int z,i,count=0;

    scanf("%d",z);
    i=sizeof(z);
    while(i > 0)
        {
            i = i / 10;
            count=count+1;
        }
    printf("%d",count);
    return 0;
}