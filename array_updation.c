#include<conio.h>
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int multiply(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
int main()
{   
    int x,y,z;
    char a;
    printf("enter the arithmatic operator you want to use :-");
    scanf("\n %c",&a);
    printf("enter the first oprend :- ");
    scanf("\n %d",&x);
    printf("enter the second oprend :- ");
    scanf("\n %d",&y);
    
    switch(a)
    {
    case '+':
    
        printf("this is the solution of your requirement :- %d",add(x,y));
        break;
    
    case '-':
    
        printf("this is the solution of your requirement :- %d",sub(x,y));
        break;
    
    case '*':
    
        printf("this is the solution of your requirement :- %d ",multiply(x,y));
        break;
    
    case '/':
    
        printf("this is the solution of your requirement :- %d",divide(x,y));
        break;
    
    default :
    
        printf("invalid !!!!!!");
    
    }
}