#include<stdio.h>
#include<math.h>
int main()
{
    double sum =0;
    long int sqr=0,i,n;  
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 ");
    printf("\nenter last term of expression: ");
    scanf("%ld", &n);
    for(i=1;i<=n;i++)
    {
        sqr=i*i;
        sum=sum+(1/(double)sqr);
        if(i==1)
        {
            printf("\n 1+");
        }
        else
        {
            if(i==n)
            {
                printf(" (1/%ld)",sqr);
            }
            else
            {
                printf( "(1/%ld) + ",sqr);
            }
        }
    }
    printf("\n\nThe SUM of the SERIES is %7.21f",sum);
}
