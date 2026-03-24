//세 개의 숫자를 입력받아 각각을 2로 나눈 나머지
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int b;
	int c;

	printf("세 개의 정수를 공백을 두고 입력해주세요: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("2로 나눈 나머지: %d %d %d\n", a % 2, b % 2, c % 2);

	return 0;
}