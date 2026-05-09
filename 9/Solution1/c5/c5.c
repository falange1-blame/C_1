#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5 //상수로 선언

int main(void) {
	int score[SIZE]; //int 5칸 선언
	int i, sum = 0;

	for (i = 0; i < SIZE; i++) { // 0~4
		scanf("%d", &score[i]); // 각 idx마다 선언 후 초기화
	}

	for(i = 0; i < SIZE; i++) {
		sum += score[i]; //score의 각 idx값을 sum에 더해서 업데이트
	}

	for (i = 0; i < SIZE; i++) {
		printf("%d ", score[i]); // score의 각 idx값을 공백을 두고 출력
	}

	printf("\nAverage: %.1f\n", (double)sum / SIZE); //평균 출력

	return 0;
}