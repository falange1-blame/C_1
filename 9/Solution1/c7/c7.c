//Counting Pattern 0~9까지의 수가 각 몇 번 반복되는지 알아내는 알고리즘
#include <stdio.h>
#define N 10

int main(void) {
	int a[N] = { 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 }; // a의 [0~9]dp {}값 넣기
	int count[10] = { 0 }; // count의 [0~9] 모두 0으로 채우기
	int i;

	/* Pass 1:  tally(기록) each value into count[] */
	for (i = 0; i < N; i++) {
		count[a[i]]++; //count의 idx가 a[i]로 설정 -> 설정된 count의 idx값이 +1
		//a[N]의 값이 몇 번 반복되는지 알 수 있다.
	}

	/*  Pass 2: print histogram */
	for (i = 0; i < N; i++) { // 0~9
		printf("%d: ", i);
		int j;
		for (j = 0; j < count[i]; j++) { // j는 0~count[i]의 값 -1 -> 그래야 3개면 0,1,2로 계산
			printf("*"); //개수를 별로 나타내서 시각화
		}
		printf("   (%d)\n", count[i]);
	}
}