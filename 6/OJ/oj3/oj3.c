//시:분:초 형태로 입력 받아 분 만 출력해보자.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int h;
	int m;
	int s;

	scanf("%d:%d:%d", &h, &m, &s);
	printf("%d\n", m);

	return 0;
}