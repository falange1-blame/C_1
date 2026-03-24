//정수를 16진수로 입력받아서 8진수, 10진수, 16진수 형태로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;

	printf("정수 하나를 입력해주세요: ");
	scanf("%d", &a);
	printf("8진수 형태:           %o\n", a);
	printf("10진수 형태:          %d\n", a);
	printf("16진수(소문자) 형태:  %x\n", a);
	printf("16진수(대문자) 형태:  %X\n", a);

	return 0;
}