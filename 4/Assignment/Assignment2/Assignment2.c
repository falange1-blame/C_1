//(67 - 75) * 3 의 결과를 출력하는 프로그램
#include <stdio.h>

int main(void)
{
	int a = 67; // 정수형 4byte 선언 동시 초기화
	int b = 75;
	int c = 3;

	printf("(67 - 75) * 3 = %d\n", (a - b) * c);
	// a-b를 먼저 계산 후 c 곱하기
	
	return 0;
}