#include <stdio.h>
#include <conio.h>
int search(int *ptr,int a)
{  
    int i;
    printf("\narray after acessing the function :-");
    for(i=0;i<10;i++)
    {   
        if(ptr[i]==a)
        {
           return 1;
        }
        else 
        {
            return 0;
        }

    }
}
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,0},i,b,y;
     printf("\narray inside program");
    for (i=0;i<10;i++)
    {
        printf("%d,",a[i]);
    }
    printf("\nenter the element to be searched :-");
    scanf("%d",&b);   
    y=search(a,b);
    if (y==0)
    {
        printf("\nfound");
    }
    else 
    {
        printf("\nnot found ");
    }    
    return 0;
}
