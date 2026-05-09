#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int input; //정수형 자료형 input 선언
    int sum = 0; //정수형 자료형 sum 선언 후 초기화

    while (1) { //무한 반복

        scanf("%d", &input); //input의 주소값에 정수 선언 후 초기화

        sum += input; //sum = sum + input 사이클 반복 e.g. sum = 0+1 -> sum = 1 + 5 ...
        if (input == 0) break; //만약 input이 0이라면 반복문 종료
    }

    printf("Sum: %d\n", sum);

    return 0;
}