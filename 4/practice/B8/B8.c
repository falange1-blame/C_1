//Embedded Register Simulator
#include <stdio.h>

#define POWER   0x01
#define READY   0x02
#define SENSOR  0x04
#define MOTOR   0x08
#define ERROR   0x80

void print_binary_8(unsigned char val)
{
	int i;
	for (i = 7; i >= 0; i--)
	{
		printf("%d", (val >> i) & 1);
	}
	printf("\n");
}

int main(void)
{
	unsigned char reg = 0x00;
	
	printf("=== Embedded Register Simulator===\n");

	printf("Initial:              0x%02X  ", reg);
	print_binary_8(reg);

	reg |= POWER;
	printf("SET POWER:            0x%02X  ", reg);
	print_binary_8(reg);

	reg |= READY;
	printf("SET READY:            0x%02X  ", reg);
	print_binary_8(reg);

	reg |= SENSOR;
	printf("SET SENSOR:           0x%02X  ", reg);
	print_binary_8(reg);

	reg |= MOTOR;
	printf("SET MOTOR:            0x%02X  ", reg);
	print_binary_8(reg);
	printf("\n\n");
	
	if (reg &= MOTOR)
	{
		printf("Motor is ON\n\n");
	}

	else
	{
		printf("Motor is OFF\n\n");
	}

	reg ^= SENSOR;
	printf("CLEAR SENSOR:         0x%02X  ", reg);
	print_binary_8(reg);
	
	
	reg ^= MOTOR;
	printf("TOGGLE MOTOR:         0x%02X  ", reg);
	print_binary_8(reg);

	reg ^= MOTOR;
	printf("TOGGLE MOTOR:         0x%02X  ", reg);
	print_binary_8(reg);

	reg |= ERROR;
	
	if (reg &= MOTOR)
	{
		printf("Motor is ON\n");
	}
	else
	{
		printf("Motor is OFF\n");
	}

	if (reg &= ERROR)
	{
		printf("Error is SET\n");
	}
	else
	{
		printf("Error is NOT SET\n");
	}

	return 0;
}