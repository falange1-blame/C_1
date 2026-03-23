//키보드로 입력한 문자를, 그대로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char A;

	scanf(" %c", &A);
	printf("%c\n", A);

	return 0;
}