#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 \n");
    printf("enter the first side off triangle   \n");
    scanf("\n %d",&a);
    printf("enter the second side off triangle   \n");
    scanf("\n %d",&b);
    printf("enter the third side off triangle   \n");
    scanf("\n %d",&c);
    if (a+b>c || b+c>a || c+a>b)
    {
        printf(" entered triangle is valid   \n ");
    }
    else
    {
        printf("entered triangle is invalid   \n");
    }
    printf("checking angle condition   \n");
    if (a*a+b*b==c*c || b*b+c*c==a*a || c*c+a*a==b*b)
    {
        printf("entered triangle is right angled triangle    \n");
    }
    else if( a==b && b==c && a==c)
    {
        printf("entred triangle is equilateral  \n");
    }
    else if( a==b || c==b || a==c )
    {
        printf("entered triangle is isosceles   \n");
    }    
    else
    {
        printf("entered triangle is scalene   \n");
    }
       
}   