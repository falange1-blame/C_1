//456 % 89 의 결과를 출력
#include <stdio.h>

int main(void)
{
	int a = 456; // 4byte 정수형 선언 동시 초기화
	int b = 89; // 4byte 정수형 선언 동시 초기화

	printf("456 %% 89 = %d\n", a % b); 
	// a와 b를 나눈 것의 나머지를 %d(정수형)으로 받아서 출력

	return 0;
}