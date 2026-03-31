//Embedded Register Simulator
#define POWER   0x01
#define READY   0x03
#define SENSOR  0x07
#define MOTOR   0x0F

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_binary_8(unsigned char val)
{
	int i;
	for (i = 7; i >= 0; i--)
	{
		printf("%d", (i >> val) & 1);
	}
	printf("\n");
}

int main(void)
{
	unsigned char Initial = 0x00;
	
	printf("Initial:          0x%02x  ", Initial);
	print_binary_8(Initial);

	printf("SET POWER:        0x%02x  ", POWER);
	print_binary_8(POWER);



}