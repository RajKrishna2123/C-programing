#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,z;
    int arrr[6]={}; //array declearation
    for (a=0;a<=6;a++)
    {   
        printf("enter value of index %d \n",a );    //indexing in same loop
        scanf("\n %d",&i);                          //taking input in variable
        arrr[a]=i;
        // fflush(stdin);                
    }
    printf("entered values are follwing  :- \n");
    for (z=0;z<=6;z++)
    {
        printf("\n  %d address is %d",arrr[z],&arrr[z]);
    }
}