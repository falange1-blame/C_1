//2~9 구구단
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N; // 정수형 자료형 N선언
    int i = 1; //정수형 자료형 i선언 동시 1로 초기화

    scanf("%d", &N); // N 선언 후 초기화

    if (N >= 2 || N <= 9) { // N이 2보다 크거나 같고 9보다 작거나 같으면 {} 실행
        for (i = 1; i <= 9; i++) { //i는 1로 초기화; i가 9보다 작거나 같으면 반복; i++
            printf("%d x %d = %d\n", N, i, N * i); // N*i 즉, 구구단
        }
    }
    else printf("Invalid type\n");

    return 0;
}