#include <stdio.h>
#include <conio.h>
int sort(int *ptr)
{  
    int i,temp1,temp2;
    printf("\ncalculating the output");
    for(i=0;i<4;i++)
    {
        if (ptr[i]>ptr[0])
        {
            temp1=ptr[i+1];
            temp2=ptr[0];
            ptr[i+1]=temp2;
            ptr[0]=temp1;
        }
    }
    printf("\nlargest element is :-%d",ptr[0]);
}
int main()
{
    int a[3],i,b,x,y;
     printf("enter the digits:-");
    for (i=0;i<4;i++)
    {
        printf("\neneter digit of place %d :- ",i);
        scanf("\n%d",&b);
        a[i]=b;
    }
    y=sort(a);
    return 0;
}
