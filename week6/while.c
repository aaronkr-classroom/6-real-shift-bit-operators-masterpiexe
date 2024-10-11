#include<stdio.h>


int main()
{
	int sum1 = 0;
	int sum2 = 1;
	int sum3 = 13;

	int count = 1;

	while (count <= 50)
	{
		printf("sum(%d)*count(%d)= ", sum3, count);
		sum3 *= count;
		printf("%d\n", sum3);


		count++;

	}
	printf("\ntotal: count=%d,sum=%d", count, sum3);
	
	
	return 0;
}
