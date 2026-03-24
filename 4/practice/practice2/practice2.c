//67 - 75 * 3 의 결과를 출력하는 프로그램을 작성하시오
#include <stdio.h>

int main(void)
{
	int a = 67; // 4byte 정수형 선언 동시 초기화
	int b = 75;
	int c = 3;

	printf("67 - 75 * 3 = %d\n", a - b * c);

	return 0;
}