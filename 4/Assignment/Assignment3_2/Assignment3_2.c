//1부터 5까지 숫자들의 합, 곱을 한 줄에 출력
#include <stdio.h>

int main(void)
{
	int a; // 4byte 짜리 정수형 선언 초기화 x
	int sum = 0; // 4byte 짜리 정수형 선언 동시 초기화
	int prd = 1;

	for (a = 1; a <= 5; a++) // 반복문 a = 1로 시작해서 a가 5보다 크거나 같을 때 까지, a를 1씩 더한다
	{
		sum = sum + a; // a가 1씩 커질 때 마다 기존의 sum과 더해져서 저장 -> 0 + 1 / 1 + 2 ... 
		prd = prd * a;  // a가 1씩 커질 때 마다 기존의 prd와 곱해져서 저장 -> 1 * 1 / 1 * 2 ... 
	}

	printf("1부터 5까지의 합: %d /", sum);
	printf("1부터 5까지의 곱: %d\n", prd);


	return 0;
}