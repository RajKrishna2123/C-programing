#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{   
    char c[4],x[5]="srtr";
    printf("enter the string ");
    scanf("\n %s",&c);
    strcat(c,x);
    printf("%s",c);
}