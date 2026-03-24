//1부터 5까지 숫자들의 합, 곱을 한 줄에 출력
#include <stdio.h>

int main(void)
{
	int a;
	int sum = 0;
	int prd = 1;
	
	for (a = 1; a <= 5; a++)
	{
		sum = sum + a;
		prd = prd * a;
	}

		printf("1부터 5까지의 합: %d /", sum);
		printf(" 1부터 5까지의 곱: %d\n", prd);
	

	return 0;
}