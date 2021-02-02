#include <stdio.h>
#include<conio.h>
int fact(int num)      
{
    int i,num1=1;
    for(i=1;i<=num;i++)
    {
        num1=num1*i;
    }
    return num1;        
}

int main()                             
{
    int n;
    double sum,count;        
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 ");
    printf("\nEnter the  No.:\t");
    scanf("%d",&n);  
    for(int i=1;i<=n;i++)   
    {
        count=1.0/fact(i);      
        sum=sum+count;
    }
    printf("\nThe sum of series upto n is %lf",sum);    
}
