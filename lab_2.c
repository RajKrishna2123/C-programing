#include <stdio.h>
#include <conio.h>
int serach_fun(int *ptr,int x)
{
    int i=0;
    for(i=0;i<10;i++)
    {
       
        if (ptr[i]==x)
        {
            return 1;
            break;
        }       
    }
    return 0;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0},b,y;
    
    printf("enter the element to be searched");
    scanf("\n %d",&b);
    y=serach_fun(a,b);
    
    if (y==1)
    {
        printf("found!!!!");
    }
    else
    {
        printf("not found");
    }
    
    return 0;
}
