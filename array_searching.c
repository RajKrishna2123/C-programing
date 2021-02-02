#include<stdio.h>
#include<conio.h>
int main()
{
	int i, arr[6] = { '1','2','3','4','5','6','7' };
	for (i = 0; i <= 6; i++)
	{
		if (arr[i] == 4) 
		{
			printf("the no if found at %d with vale %d", i, arr[i]);
			break;
		}
	}
	return 0;
} 