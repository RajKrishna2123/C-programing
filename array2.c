#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,z;
    int arrr[6][2];
    for (a=0;a<=6;a++)
    {
        for (i=0;i<=2;i++)
        {
            printf("enter digit referncing index %d and sub index %d :- \n",a,i);
            scanf("\n %d",&z);
            arrr[a][i]=z;
            
        }
    }
    for (a=0;a<=6;a++)
    {
        for (i=0;i<=2;i++)
        {
            printf("digit referncing index %d and sub index %d :- %d \n",a,i,arrr[a][i]);
        }
    }
}