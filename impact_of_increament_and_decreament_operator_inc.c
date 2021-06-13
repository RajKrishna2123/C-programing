#include <stdio.h>
#include <conio.h>
int serach_fun(int *ptr)
{
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%d,",*ptr);      
        *ptr++; 
    }
}
int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    
    printf("affect of increament operator in c on pointer");
    serach_fun(a);
    return 0;
}
