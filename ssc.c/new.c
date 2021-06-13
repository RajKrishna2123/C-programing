#include<stdio.h>
int main()
{
    int x,y, i, temp, a, top1, top2, top3,stack1[50],stack2[50],stackf[100];
    printf("enter size of stack1 :- ");
    scanf("%d",&x);
    top1=x-1;
    printf("enter size of stack2 :- ");
    scanf("%d",&y);
    top2=y-1;    
    top3=-1;
    printf("enter stack1");
    for(i=0;i<x;i++)
    {
        printf("\nenter stack1 pos %d :- ",i);
        scanf("%d",&stack1[i]);        
    }
    printf("enter stack2");
    for(i=0;i<y;i++)
    {
        printf("\nenter stack2 pos %d :- ",i);
        scanf("%d",&stack2[i]);
    }
    for(i=0;i<x;i++)
    {
        stackf[++top3]=stack1[i];
    }
    for(i=0;i<y;i++)
    {
        stackf[++top3]=stack2[i];
    }
    for(i=0;i<x+y;i++)
    {
        for(a=0;a<(x+y)-i-1 ;a++)
        {
            if(stackf[a]>stackf[a+1])
            {
                int temp=stackf[a];
                stackf[a]=stackf[a+1];
                stackf[a+1]=temp;
            }
        }
    }
    printf("\nsorted array is\n");
    
    for(i=0;i<x+y;i++)
    {
        printf("%d , ",stackf[i]);
    }
}