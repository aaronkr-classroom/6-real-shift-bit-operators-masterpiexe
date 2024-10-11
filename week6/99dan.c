#include<stdio.h>
void showmultiplication();

int main()
{
	for(int i=1;i<=9;i++)
	showmultiplication(i);

	return 0;
}
void showmultiplication(int dan)
{
	
	int count;
	
		for (count=1; count <= 9; count++)
			printf("%d*%d=%d\n", dan, count, dan * count);
	
}