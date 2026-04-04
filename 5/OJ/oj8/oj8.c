#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int year;
	int month;
	int day;

	scanf("%d.%d.%d", &year, &month, &day);
	printf("%d.%02d.%02d\n", year, month, day);

	return 0;
}