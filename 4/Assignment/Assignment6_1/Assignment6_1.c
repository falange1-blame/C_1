//3x² + 7x + 11 을 계산하는 프로그램을 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x;

	printf("x값을 입력해주세요: ");
	scanf("%d", &x);
	printf("3x² + 7x + 11 = %d\n", (3 * x * x) + (7 * x) + 11);

	return 0;
}