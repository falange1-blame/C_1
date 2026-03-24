//삼각형의 높이와 밑변을 받아서 넓이를 계산
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float h;
	float w;

	printf("실수로 높이와 밑변의 값을 공백을 두고 입력해주세요: ");
	scanf("%f %f", &h, &w);
	printf("삼각형의 넓이: %f\n", 0.5 * w * h);

	return 0;
}