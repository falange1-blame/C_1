//실수(float) 하나를 입력받아 저장한 후, 소수점 3째 자리에서 반올림해 2째 자리까지 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float a; //4byte 실수형 a 선언 assignment -> 값 아직 주지 않음
	
	printf("실수 하나를 입력해주세요: ");
	scanf("%f", &a); // a의 주소값에 선언 후 초기화
	printf("%.2f", a);// 소수점 세 번째 자리에서 반올림하여 두 번째까지 표기

	return 0;
}