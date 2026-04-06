#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a[21]; //1Byte 문지 지료형 21개 선언
	int i; //4 Byte 정수 자료형 선언

	scanf("%s", a); 
	for (i = 0; a[i] != '\0'; i++)
	{
		printf("\'%c\'\n", a[i]);
	}

	return 0;
}