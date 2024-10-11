#include<stdio.h>

int main()
{
	int age;
	

	do
	{
		printf("나이를 입력해 주세요: ");
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
	} while (age <= 0);//0이하의 나이를 입력하면 반복문을 계속 실행시킨다
	printf("ended\n");


	return 0;
}