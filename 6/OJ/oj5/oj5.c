//정수 한 개를 입력받아 그대로 출력해보자. (단, 입력되는 정수의 범위는 0 ~4, 294, 967, 295 이다.)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned int a;

	scanf("%u", &a);
	printf("%u\n", a);

	return 0;
}