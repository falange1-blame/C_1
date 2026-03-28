//Practice 1: Bit Manipulation Basics
#include <stdio.h>

void print_binary(unsigned char val) // void 함수 이름(unsigned char 입력 받음)
{
	int i; // 정수형 4byte 선언
	for (i = 7; i >= 0; i--) // 반복문: i = 7로 시작; i가 0보다 크거나 같다면; i를 1싹 감소시킨다
		// 이진수 8bit 표현을 위해서
		printf("%d", (val >> i) & 1); //입력된 unsigned char의 오른쪽으로 i만큼 가기
	// & 00000001을 하면 각 자리 수를 비교하면서 추출
	printf("\n"); // 줄 바꾸기
}

int main(void)
{
	unsigned char a = 0xA5;
	unsigned char b = 0x3C;

	printf("a     = %#X = ", a);
	print_binary(a);
	printf("b     = %#X = ", b);
	print_binary(b);
	printf("a & b = %#X = ", a & b);
	print_binary(a & b);
	printf("a | b = %#X = ", a | b);
	print_binary(a | b);
	printf("a ^ b = %#X = ", a ^ b);
	print_binary(a ^ b);
	printf("~a    = %#X = ", (unsigned char)~a);
	print_binary(~a);
	printf("a<<2  = %#X = ", (unsigned char)(a << 2));
	print_binary(a<<2);
	printf("a>>3  = %#X = ", a >> 3);
	print_binary(a>>3);

	return 0;
}