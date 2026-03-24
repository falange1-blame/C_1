//사용자로부터 3개의 정수를 입력받은 뒤, 합계와 평균을 계산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;

	printf("세 정수를 공백을 두고 입력해주세요: ");
	scanf("%d %d %d", &a, &b, &c);
	printf("합계: %d\n", a + b + c);
	printf("평균: %d\n", (a + b + c) / 3);

	return 0;
}