#include <stdio.h>
#include <conio.h>
int update(int *ptr,int x,int pos)
{
    ptr[pos]=x;
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0},i,b,x,y;
     printf("array is brfore updation :-");
    for (i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("enter the element to be updated");
    scanf("\n %d",&b);
    printf("enter the place of updation");
    scanf("\n %d",&x);    
    y=update(a,b,x);
    printf("array is after updation :-");
    for (i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
