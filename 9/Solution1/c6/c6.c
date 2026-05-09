//Finding Max, Min, Index
#include <stdio.h>
#define N 6

int main(void) {
	int a[N] = { 34, 78, 12, 90, 67, 45 }; //a[6(0~5)]의 값은 {} 
	int i, max_val, max_idx, min_val;

	max_val = min_val = a[0]; //최대, 최소값은 a[0]으로 시작
	max_idx = 0; //idx 또한 0으로 시작

	for (i = 1; i < N; i++) { // 0은 이미 정해져있으니 1부터 N-1까지
		if (a[i] > max_val) { //만약 a[i]의 값이 max_val 보다 크다면
			max_val = a[i]; //max_val은 a[i]로 업데이트
			max_idx = i; //max_idx도 마찬가지로 업데이트
		}
		if (a[i] < min_val) { //만약 a[i]가 in_val보다 작다면
			min_val = a[i]; //min_val은 a[i]
		}
	}

	printf("Max: %d at index %d\n", max_val, max_idx); //max_val 값과 max_idx 값 저장
	printf("Min: %d\n", min_val); //min_val 값 출력
	printf("Range: %d\n", max_val - min_val); //범위 출력: 최대값과 최소값의 차 이용

	return 0;
}