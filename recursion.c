#include<stdio.h>
#include<conio.h>
struct student
    {
        char name[25];
        long sapid;
        long mob_no;
    }b1;

void main()
{
    struct student b2;
    printf("\n enter stdet details");
    gets(b1.name);
    scanf("%ld %ld",&b1.sapid,&b1.mob_no);
    printf("\n student details are");
    printf("\n %s %ld %ld ",b1.name,b1.sapid,b1.mob_no);
}