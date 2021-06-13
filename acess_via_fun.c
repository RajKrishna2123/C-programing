#include <stdio.h>
#include <conio.h>
int acess(int *ptr)
{  
    int i;
    printf("\narray after acessing the function :-");
    for(i=0;i<10;i++)
    {
        printf("%d,",ptr[i]);
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0},i,b,x,y;
     printf("array brfore acessing via function :-");
    for (i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
    y=acess(a);
    return 0;
}
