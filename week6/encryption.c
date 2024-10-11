#include<stdio.h>
#include<string.h>
void encrypt(char* data, char key)
{
	for (int i = 0; data[i] != '\0'; i++)
	{
		data[i] = data[i] ^ key;
	}
}
void decrypt(char* data, char key)
{
	for (int i = 0; data[i] != '\0'; i++)
	{
		data[i] = data[i] ^ key;
	}
}
int main()
{
	char text[] = "Hanbat National university";
	char key = 'M';
	printf("original: %s\n", text);
	encrypt(text, key);
	printf("encrypted: %s\n", text);
	decrypt(text, key);
	printf("decrypted: %s\n", text);
	
	
	
	
	return 0;
}