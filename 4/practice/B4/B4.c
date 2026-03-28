//Number Base Converter
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>

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
	scanf(" %hhu", &num); // %hhu unsigned char용

	printf("Decimal   :%d\n", (unsigned char)num);
	printf("Hex       :%#02x\n", (unsigned char)num);
	printf("Octal     :%04o\n", (unsigned char)num);
	print_binary_8(num);

	printf("Upper nibble: 0xF  (15)\n");
	printf("Lower nibble: 0XF  (15 \n");

	return 0;
}