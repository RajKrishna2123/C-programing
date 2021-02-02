#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int a,i,b;
    char x[50],y[50],z[50];
    char arrr[20][3];
    
    for (a=0;a<=19;a++)
    {
        for (i=0;i<=3;i++)
        {
            printf("sub indexing value :-\n0.player name\n1.age\n2.no of test matches played\n3.average score till now");
            printf("enter details referncing player index %d and sub index %d :- \n",a,i);
            scanf("\n %s",&x);
            strcpy(arrr[a][i],x);
            
        }
    }
    for (a=0;a<=19;a++)
    {
        for (i=0;i<=3;i++)
        {
            printf("player index %d and sub index %d details :- %s \n",a,i,arrr[a][i]);
        }
    }
}
