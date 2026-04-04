#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int hour;
	int minute;

	scanf("%d:%d", &hour, &minute);
	printf("%d:%d\n", hour, minute);

	return 0;
}