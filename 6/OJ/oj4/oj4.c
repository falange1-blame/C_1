//년월일을 출력하는 방법은 나라마다, 형식마다 조금씩 다르다. 년월일(yyyy.mm.dd)를 입력받아, 일월년(dd - mm - yyyy)로 출력해보자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int y;
	int m;
	int d;

	scanf("%d.%d.%d", &y, &m, &d);
	printf("%02d-%02d-%04d\n", d, m, y);

	return 0;
}