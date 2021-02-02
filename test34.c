#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i;
    char a[12]="rajkrishna";
    for (i=0;i<=12;i++)
    {
        if (a[i]=='h')
        {
            printf("found at position %d",i);
            break;
        }
        else
        {
            printf("not found!00");
        }
        
    }
}
