//Character Info
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c;
	scanf(" %c", &c);

	printf("Character: %c\n", c);
	printf("ASCII:     %d\n\n", c);

	if (c >= 48 && c <= 57)
		printf("Digit:     %c\n", c);
	else if (c >= 65 && c <= 90)
		printf("Uppercase: %c\n", c);
	else if (c >= 97 && c <= 122)
		printf("Lowercase: %c\n", c);
	else
		printf("Other:     %c\n", c);

	return 0;
}