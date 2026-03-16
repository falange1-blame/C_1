//Temperature Converter
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float C;
	scanf("%f", &C);

	float F = (C * 9.0 / 5.0) + 32.0;

	printf("\"%.1fC = %.1fF\"\n", C, F);
	return 0;
}