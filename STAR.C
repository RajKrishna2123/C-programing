#include<stdio.h>
#include<conio.h>
void fun(int a)
{
    if (a<=1)
    {
        return a;
    }
    else
    {
        return fun(a-1) +fun(a-2);
    }
}
void main()
{
    int nterms = 10,i;
    if (nterms <= 0)
    {
        printf("Plese enter a positive integer")
    }
    else
    {
        printf("Fibonacci sequence:");
    
        for (i=0;i=nterms;i++)
        {
            printf(recur_fibo(i))
        }
       

}
