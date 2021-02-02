#include<conio.h>
#include<stdio.h>
float area(int s);

int main()
{   
    int x;
    float y;
    printf("enter any no");
    scanf("\n %d",&x);
    printf("entered no is %d",x);
    printf("\n area of circle is  %f",area(x));
    return 0;
}
float area(int s)
{
    // float r;
    // r=3.14*s*s;
    // printf("area of circle is %f",r);
    return 3.14*s*s;
}