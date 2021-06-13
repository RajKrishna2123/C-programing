#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[3][3];
    int i,j;
    printf("3x3 Matrix : ");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {        
            printf("\nEnter element at %d,%d : ",i+1,j+1);
            scanf("%d",&arr[i][j]); 
        }
    }
    printf("\n\n3x3 matrix entred by you :-  \n\n");
    for(i=0;i<=2;i++) 
    {
        for(j=0;j<=2;j++)
        {
            printf("%d  ",arr[i][j]);
        }    
        printf("\n");
    }
    printf("transpose of the matrix is :-\n");
    for (j=0;j<=2;j++)
    {
        for (i=0;i<=2;i++)
        {
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
}