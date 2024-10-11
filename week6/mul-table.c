#include<stdio.h>

int main()
{
	int i, j;

	printf("    ");
	for (int i = 1; i <= 9; i++)
	{
		printf("%4d", i);
	}
	printf("\n");

	printf("    ------------------------------------\n");
	for (int i = 1; i <= 9; i++)
	{
		printf("%2d |", i);
		for (j = 1; j <= 9; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}

	return 0;
}