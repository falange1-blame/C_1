//54321 -> 12345
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N; //정수형 자료형 N선언
    int reversed = 0; //정수형 자료형 reversed 선언

    scanf("%d", &N); //N 선언 후 초기화


    while (N > 0) { //N이 0보다 크다면 반복 - N%10으로 끝 자리 수 구하므로 모든 자리수를 추출하면 0이다.
        reversed = (reversed * 10) + (N % 10); // N%10으로 마지막 자리수 추출 + (reversed * 10)으로 5 -> 50 -> 500으로 = N 5 ->  reversed 50 / 4 -> 4 + 50 / 3 -> 500 + 40 + 3
        N /= 10; //이미 계산된 끝자리수 없애기
    }
    printf("Reversed: %d", reversed);
    return 0;
}