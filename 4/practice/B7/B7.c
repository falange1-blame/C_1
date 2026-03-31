//Hex Color Decoder
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

print_binary(val)
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
	int color;
	int mask = 0xFF; // 이진수 1111 1111

	printf("Type a hex color code (e.g. FF8C00): ");
	scanf("%X", &color);

	int Red = (color >> 16) & mask; // 1111 1111 & 1111 1111
	int Green = (color >> 8) & mask; // e.g. 1111 1111 1000 1100 & 0000 0000 1111 1111 = 1000 1100(8C)
	int Blue = (color) & mask;

	printf("=====Color Decoder=====\n");
	printf("Input: %#X\n", color);
	
	printf("-----------------------\n");
	printf("Red: %d %#02X ", Red, Red);
	print_binary(Red);

	printf("Green: %d %#02X ", Green, Green);
	print_binary(Green);

	printf("Blue: %d %#02X ", Blue, Blue);
	print_binary(Blue);

	return 0;
}