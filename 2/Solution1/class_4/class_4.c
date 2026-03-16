// Integer Literals: Decimal, Octal, Hex
#include <stdio.h>

int main(void)
{
	int dec = 255; //decimal literal
	int oct = 0377;//octal literal (prefix 0)
	int hex = 0xFF;//hexadecimal literal (prefix 0x)

	//All three are same value 255
	printf("dec = %d\n", dec);
	printf("oct = %d\n", oct);
	printf("hex = %d\n\n", hex);
	// Cause %d is to print int in decimal

	//Print hex and oct appropriately
	printf("oct: %o\n", oct);
	printf("hex: %X\n", hex); //%X for uppercase, %x for lowercase

	return 0;
}