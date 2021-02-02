#include<conio.h>
#include<stdio.h>
int main()
{
	int arr[6] = { '1','2','3','4','5','6','7' },i;
	for (i = 0; i <= 6; i++)
	{
		if (arr[i] == 4)
		{	
			printf("no is found at psition %d that is %d", i, arr[i]);
			break
		}
	}
	return 0;
}