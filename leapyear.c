#include<stdio.h>
#include<conio.h>
int main()
{
    printf("Name :- Raj Krishna \nbatch:-c8 \nsap id :- 1000015049 \n"); 
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 4 == 0)
    {
      printf("%d is a leap year.", year);
    }
    else if (year % 100 == 0 ) 
    {
      printf("%d is not a leap year.", year);
    }
    else 
    {
      printf("%d is not a leap year.", year);
    }
   return 0;
}
