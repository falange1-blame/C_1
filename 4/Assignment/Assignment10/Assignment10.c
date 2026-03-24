//시(hour)와 분(minute)이 ":"(콜론)으로 구분되어 입력될 때, 그대로 "시:분"형식으로 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	int hour;
	int minute;

	printf("시(hour) 입력 후 콜론(:) 분(minute) 입력: ");
	scanf("%d:%d", &hour, &minute);
	printf("%d:%02d", hour, minute);

	return 0;
}