//int형의 변수 x와 y의 값을 서로 교환
#include <stdio.h>

int main(void)
{
	int x = 10; //4byte 정수형 선언 동시 초기화
	int y = 20; //4byte 정수형 선언 동시 초기화
	int temp = x; //4byte 정수형 선언 동시 초기화

	x = y; // x를 y로 재정의
	y = temp; // y를 temp로 재정의

	printf("x:  %d\n", x); 
	printf("y:  %d\n", y);

	return 0;
}