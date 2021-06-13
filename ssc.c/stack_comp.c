#include<conio.h>
#include<stdio.h>
int main()
{
    int arr1[4],arr[4],i,j;
    for (i=0;i<4;i++)
    {
        printf("enter the stack1 elements position %d :- ",i);
        scanf("\n %d",&arr[i]);
    }
    for (i=0;i<4;i++)
    {
        printf("enter the stack2 elements position %d :- ",i);
        scanf("\n %d",&arr1[i]);
    }
    j=0;
    for (i=0;i<4;i++)
    {
       
            if (arr1[i]!=arr[i])
            {
                printf("\n stacks are not same");
            }
            else
            {   
               
                j=j+1;
            }
            
        
    }
    if (j==4)
    {
        printf("\nstack is same");
    }
}