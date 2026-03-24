//double형의 실수로 길이, 너비, 높이를 입력받아 부피를 출력하는 프로그램을 작성
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double l;
	double w;
	double h;

	printf("길이, 너비, 높이를 입력해주세요: ");
	scanf("%lf %lf %lf", &l, &w, &h);
	printf("부피: %lf\n", l * w * h);

	return 0;
}