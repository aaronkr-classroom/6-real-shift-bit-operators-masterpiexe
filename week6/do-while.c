#include<stdio.h>

int main()
{
	int age;
	

	do
	{
		printf("���̸� �Է��� �ּ���: ");
		scanf_s("%d", &age);

		if (age >= 18)

		{
			printf("Access granted\n");
			printf("smoke dring etc.\n");
		}
		else if (age > 0)
		{
			printf("u r not an adult\n");
		}
		else
			printf("Enter a positive number\n");
	} while (age <= 0);//0������ ���̸� �Է��ϸ� �ݺ����� ��� �����Ų��
	printf("ended\n");


	return 0;
}