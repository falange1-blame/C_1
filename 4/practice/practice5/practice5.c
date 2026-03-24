//두 개의 숫자를 입력받아 첫 번째 숫자에서 두 번째 숫자를 뺀 값을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	printf("정수 2개를 공백을 두고 작성해주세요: ");
	scanf("%d %d", &a, &b);
	printf("a - b = %d\n", a - b);

	return 0;
}