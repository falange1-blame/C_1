//The Problem Without Arrays
#include <stdio.h>

/*
if we don't use Arrays We have to ...
int score1, score2, score3 ..., score50;
*/

int main(void) //메인 함수 선언
{
	int sum = 0;
	int i = 0;
	int score[50]; //8Byte 정수형 자료형 50개 선언 -> 400Byte

	for (i = 0; i < 50; i++) {
		score[i] = 1;
	}
	// 0~49까지 즉 50개를 모두 1이라고 선언

	for (i = 0; i < 50; i++) { //i가 0부터 49까지 1씩 증가
		sum += score[i]; //sum = sum + score[0 ~ 49]
	}

	printf("sum of score = %d\n", sum); //정수형 자료형 int 변수의 값을 출력
	return 0; //메인 함수 종료
}