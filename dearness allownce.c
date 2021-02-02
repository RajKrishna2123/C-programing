#include<conio.h>
#include<stdio.h>


int main()
{   
    int x;
    printf("enter basic salary of ramesh");
    scanf("\n %d",&x);
    printf("after adding dearness allownce salary exceeds to",x+(x*0.4));
    printf("after adding house rent allownce salary exceeds to gross salary",x+(x*0.2)+(x*0.4));

return 0;