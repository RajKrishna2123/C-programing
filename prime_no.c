#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,x,j;
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 ");
    printf("\nEnter the Number");
    scanf("%d",&n);
    printf("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        x=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
            {
                x++;
            }
        }
        if(x==2)
        {
            printf("%d " ,i);
        }
    }   
}