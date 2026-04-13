#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void) //메인 함수 선언
{
    int N; //정수형 자료형 변수 N 선언 4Bytes
    int i = 0; // 정수형 자료형 변수 i 선언 4Bytes
    int sum = 0; // 전수형 자료형 변수 sum 선언 4Bytes

    scanf("%d", &N); //정수형으로 N의 주소값에 선언 후 초기화

    for (i = 1; i <= N; i++) { //i = 1로 초기화; i 가 N보다 작다면 반복; i 1씩 증가
        sum += i; //sum = sum+1 -> 변수 sum을 i만큼 더하여 초기화, 즉, sum 지속해서 업데이트 되어 1~N까지 더한 값
    }
    printf("Sum: %d\n", sum);

    return 0;
}