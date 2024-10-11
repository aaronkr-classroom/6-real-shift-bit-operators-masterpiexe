#include<stdio.h>

unsigned char lampoff(unsigned char dest, unsigned char bit);
unsigned char lampon(unsigned char dest, unsigned char bit);

	
int main()
{
	unsigned char lamp = 0x7F;//lamp on(0111 1111)
	printf("lamp off\n");
	printf(" % x -> ", lamp);
	lamp = lampoff(lamp, 3);//lamp off (0111 0111)
	printf("%x\n", lamp);

	printf("lamp on\n");
	printf("%x-> ", lamp);
	lamp = lampon(lamp, 3); //lamp already off 0111 0111 0x77
	printf("%x\n", lamp); // lamp on 0111 1111 0x7f


	return 0;
}
unsigned char lampoff(unsigned char dest, unsigned char bit)
{
	if (bit < 8)
	{
		dest = dest & ~(0x01 << bit);//and 사용하면 0으로 설정
		}
	return dest;
}
unsigned char lampon(unsigned char dest, unsigned char bit)
{
	if (bit < 8)
	{
		dest = dest | (0x01 << bit);//or 사용하면 1로 설정
	}
	return dest;
}
