//N개의 정수의 최대값과 최소값을 찾아라
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void) //main 함수 선언
{
    int N; // 정수형 자료형 N 선언
    int i; // 정수형 자료형 i(for문에 쓸 예정)
    int Min; // 정수형 자료형  Min 선언
    int Max; // 정수형 자료형  Max 선언
    int input; //정수형 자료형 input 선언

    scanf("%d", &N); //N의 주소값에 정수 선언 후 초기화
    scanf("%d", &input); //input의 주소값에 정수 선언 후 초기화
     
    Max = input; //Max를 input의 값과 동일하게 초기화 
    Min = input; //Min을 input의 값과 동일하게 초기화 -> Max와 Min을 같게 설정하고 이후에 입력될 input과 비교하여 Max와 Min 초기화

    for (i = 1; i < N; i++) { // i = 1 초기화; i는 1~N-1: for문 바깥에 이미 한 번 실행했기 때문에; i++

        scanf("%d", &input); //input의 주소값애 선언 후 초기화

        if (input > Max) Max = input; //만약 input이 이전 사이클의 Max보다 크다면 Max = input
        if (input < Min) Min = input; //만약 input이 이전 사이클의 Min보다 작다면 Min = input

    }

    printf("Min: %d\n", Min);
    printf("Max: %d\n", Max);

    return 0;
}
