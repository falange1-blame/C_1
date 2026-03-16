//Print pi three times with different precisions
#include <stdio.h>
int main()
{
	float pi = 3.141593;
	printf("%f\n", pi);
	printf("%.2f\n", pi); //소수점 3자리에서 반올림하여 2자리 까지 출력
	printf("%.4f\n", pi);
	return 0;
}