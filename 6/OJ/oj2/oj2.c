//다섯 자리의 정수 하나를 입력받아 각 자리별로 구분해 출력한다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	scanf("%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e);
	a = a * 10000;
	b = b * 1000;
	c = c * 100;
	d = d * 10;
	e = e;

	printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n", a, b, c, d, e);

	return 0;
}