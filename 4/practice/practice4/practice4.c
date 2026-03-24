//사용자로부터 화씨온도를 입력받아서, 섭씨온도로 변환
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double f;

	printf("화씨를 입력해주세요: ");
	scanf("%lf", &f);
	printf("섭씨:  %.2lf\n", (5.0 / 9.0) * (f - 32));

	return 0;
}