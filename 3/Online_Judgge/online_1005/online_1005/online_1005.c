// 두 정수의 합을 출력하는 프로그램 두 정수가 공백을 두고 입력된다
#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>  // library for input and output

int main(void) // declare main function
{
	int A; // declare integer type 4 bytes
	int B; // declare integer type 4 bytes

	printf("Please Type integer with space:   "); 
	scanf("%d %d", &A, &B); // first save after declare with integer type in address A and B

	printf("%d\n", A + B); 
	return 0;
}