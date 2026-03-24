//마일을 미터로 환산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float m;

	printf("마일 값을 입력하세요: ");
	scanf("%f", &m);
	printf("미터 변환값: %.2f\n", 1609 * m);

	return 0;
}