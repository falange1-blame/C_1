//Above average
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void) //메인 함수 선언
{
    int n;                         //정수형 자료형(4Byte) 변수 n으로 선언
    scanf("%d", &n);               //변수 n의 주소값에 정수를 선언 후 초기화
    int score[n];                  //정수형 자료형(4*n Byte)n개를 변수 score로 선언
    int i = 0;                     //정수형 자료형 변수 i에 선언 동시 초기화
    double avg = 0;                //실수형 자료형 double에(8Byte) 변수 avg로 동시 초기화
    int sum = 0;                   //정수형 자료형 변수 sum에 동시 초기화 
    int count = 0;                 //정수형 자료형 변수 count에 동시 초기화

    for (i = 0; i < n; i++) {        //초기값 i = 0; i < n이 참이라면; i를 1 더한다.
        scanf("%d ", &score[i]);   //score의 [i]의 주소값에 선언 후 초기화
        sum += score[i];           //sum = sum + score[i] [0~n-1]까지의 score 값을 sum에 초기화 
        avg = sum / n;             //
    }

    for (i = 0; i < n; i++) {
        if (score[i] > avg == 1) {
            count++;
        }
    }
    printf("Above: %d\n", count);

    return 0;
}