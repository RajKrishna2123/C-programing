#include<stdio.h>
#include<conio.h>
int main()
{
    int stack1[50],stack2[50],stackf[100],x,y,z,a,b,c,i;
    printf("enter the no of elements of stack 1");
    scanf("\n %d",&x);
    for (i=0;i<x;i++)
    {
        printf("enter the stack1 elements position %d :- ",i);
        scanf("\n %d",&stack1[i]);
    }
    printf("enter the no of elements of stack 2");
    scanf("\n %d",&y);
    for (z=0;z<y;z++)
    {
        printf("enter the stack2 elements position %d :- ",z);
        scanf("\n %d",stack2[z]);
    }
    for (i=0;i<x;i++)
    {
        stackf[i]=stack1[i];
    }
     for (i=0;i<y;i++)
    {
        stackf[x+i]=stack2[i];
    }
}