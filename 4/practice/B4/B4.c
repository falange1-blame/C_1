//Number Base Converter
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_binary_8(unsigned char val)
{
	int i;
	printf("Binary    :");
	for (i = 7; i >= 0; i--)
	{
		printf("%d", (val >> i) & 1);
		if (i == 4) printf(" ");
	}
	printf("\n\n");
}

int main(void)
{
	unsigned char num;

	printf("Enter an integer (0 ~ 255): ");
	scanf("%hhu", &num); // %hhu unsigned char용

	printf("Decimal   :%d\n", (unsigned char)num);
	printf("Hex       :%#02X\n", (unsigned char)num);
	printf("Octal     :%04o\n", (unsigned char)num);
	print_binary_8(num);

	printf("Upper nibble: %X  (%d)\n", (num >> 4) & 0xF, (num >> 4) & 0xF);
	printf("Lower nibble: %X  (%d) \n", (num) & 0xF, (num) & 0xF);

	return 0;
}

/* T.A. Solution
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int input;
	unsigned char n;

	scanf
	n = (unsigned char)input;

	printf("Decimal: %d\n", n)
	printf("Hax: %02\n", n)
	printf("Octal: %0\n", n)
	print_binary(n)


}

*/