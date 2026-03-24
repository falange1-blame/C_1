//3x² + 7x + 11 을 계산하는 프로그램을 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main()
{
	int x;

	printf("x값을 입력해주세요: ");
	scanf("%d", &x);
	printf("3x² + 7x + 11 = %d\n", (int)(3 * pow(x,2)) + (7 * x) + 11); //pow()의 결과 타입 double
	//printf("3x² + 7x + 11 = %.0lf\n", (3 * pow(x,2)) + (7 * x) + 11);

	return 0;
}

