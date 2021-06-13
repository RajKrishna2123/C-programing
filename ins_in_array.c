#include <stdio.h>
#include<stdio.h>
int main()
{	
	printf("name:- raj krishna \nsap id:-1000015049 \nsection:-f\n");
	int arr[100] = { 0 };
	int i, x, y, z = 10;
	for (i=0;i<10;i++)
	{
		arr[i] = i + 1;
	}
	for (i=0;i<z;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\nenter the value to be added :- ");
	scanf("\n%d",&x);
	printf("\nenter the desired position :- ");
	scanf("\n%d",&y);
	z++;
	for (i=z-1;i>=y;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[y-1]=x;	
	for (i=0;i<z;i++)
	{
		printf("%d,",arr[i]);
	}
	printf("\n");
	return 0;
}
