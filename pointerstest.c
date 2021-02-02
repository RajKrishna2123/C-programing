#include <stdio.h>
#include<conio.h>
int main () {

    int  var1;
    char var2[10];
    int *ptr1=&var1,*ptr2=&var2;
    printf("enter the value for variable 1 :- ");
    scanf("\n %d",&var1);
    printf("enter the value of variable 2 should be one characeter :- ");
    scanf("\n %c",&var2);
    printf("Address of var1 variable: %x\n", &var1  );
  
    printf("Address of var2 variable: %x\n", &var2  );
    printf("Address of var1 variable: %d\n", ptr1 );
    printf("Address of var1 variable: %d\n", ptr2 );
    return 0;
}