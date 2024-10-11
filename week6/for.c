#include<stdio.h>
#include<string.h>//A=65 a=97
int main()
{
	char* string = "Hanbat National University";
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == 'a')
		{
			char upper = string[i] - 32;
			printf("index %d %c\n", i, upper);
		}
		else if (string[i] == ' ')
		{
			continue;
		}
		else {
			printf("index %d %c\n", i, string[i]);
		}
		
	}


	return 0;
}