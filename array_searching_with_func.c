#include <stdio.h>
#include <conio.h>
int search(int *ptr,int x)
{
    int i=0;
    for (i=0;i<10;i++)
    {
    if (*ptr==x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    *ptr=*ptr+1;
    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0},i,b,x,y;
    
    printf("array saved inside :-\n");
    for (i=0;i<10;i++)
    {
        printf("%d",a[i]);
    }
    printf("\nenter the element to be searched :-");
    scanf("\n %d",&b);  
    y=search(a,b);
    if (y==1)
    {
        printf("found!!!");
    }
    else 
    {
        printf("not found");
    }
}
