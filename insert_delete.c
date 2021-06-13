#include <stdio.h>
int main()
{
    printf("name:- raj krishna \nsap id:-1000015049 \nsection:-f\n");
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int i, n=10, x;
    printf("Enter the element position to delete : ");
    scanf("%d", &x);
    if(x<0||x>n)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
        for(i=x-1;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }        
        n--;
        printf("Elements of array after delete are : ");
        for(i=0; i<n; i++)
        {
            printf("%d,",arr[i]);
        }
    }
    return 0;
}