//하나의 실수를 입력받아 소수점 표기방법과 지수 표기방법으로 동시에 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a;

	printf("실수 하나를 입력해 주세요: ");
	scanf("%f", &a);
	printf("%f %e", a, a);

	return 0;
}