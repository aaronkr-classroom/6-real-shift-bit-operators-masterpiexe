#include<stdio.h>

#define FLAG1 0x01
#define FLAG2 0x02
#define FLAG3 0x04
#define FLAG4 0x08
int main()
{
	unsigned char status = 0;

	status |= FLAG1;
	printf("After setting FLAG1: %X\n",status);

	status |= FLAG2;
	printf("After setting FLAG2: %X\n", status);

	status &= ~FLAG1;
	printf("After clearing FLAG1: %X\n", status);

	status ^= FLAG3;
	printf("After toggling FLAG3: %X\n", status);
	status ^= FLAG4;
	printf("After toggling FLAG3: %X\n", status);








	if (status & FLAG1) printf("FLAG1 is set.\n");
	if (status & FLAG2) printf("FLAG2 is set.\n");
	if (status & FLAG3) printf("FLAG3 is set.\n");
	if (status & FLAG4) printf("FLAG4 is set.\n");
	return 0;
}