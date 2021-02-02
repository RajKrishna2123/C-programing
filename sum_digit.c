#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y1,y2,y3,y4,y5,c1,c2,c3,c4;
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 \n"); 
    printf("enter a 5 digit no :- ");
    scanf("\n %d",&x);
    y1=x%10;
    y2=(x%100)/10;
    y3=(x%1000)/100;
    y4=(x%10000)/1000;
    y5=(x%100000)/10000;
    printf("enetre unit digigt is  %d%d%d%d%d,",y1,y2,y3,y4,y5);
}