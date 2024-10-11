#include<stdio.h>
int main()
{
	int step, i;


	for (step = 1; step <= 9; step++)
	{
		printf("\n=== Group %d ===\n", step);

		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", step, i, step * i);
		}
	}




}