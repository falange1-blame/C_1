// 과일 옮기는 횟수 최소화
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A;
	int B;
	int C;
	int D;

	printf("첫 번째 바구니의 사과와 오렌지 입력:   ");
	scanf("%d %d", &A, &B);

	printf("두 번째 바구니의 사과와 오렌지 입력:   ");
	scanf("%d %d", &C, &D);

	printf("최소 횟수 =  ");

	if (A + D >= B + C)
		printf("%d\n", B + C);
	else if (A + D < B + C)
		printf("%d\n", A + D);

	return 0;
}