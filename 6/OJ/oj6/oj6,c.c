/*
실수 한 개를 입력받아 그대로 출력해보자.
(단, 입력되는 실수의 범위는 +- 1.7*10^-308 ~ 1.7*10^308 이다.)
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double a;
	
	scanf("%lf", &a);
	printf("%.11lf", a);

	return 0;
}