#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int a; //정수형 자료형 a 선언
    int b; //정수형 자료형 b 선언
    int temp = 0; //정수형 자료형 temp 선언 동시 초기화

    scanf("%d", &a); //주소값 a에 정수 선언 후 초기화
    scanf("%d", &b); //주소값 b에 정수 선언 후 초기화

    if (a >= b) { //만약 a가 b보다 크거나 같다면 {} 실행
        while (b != 0) { //b가 0이 아니라면 반복
            if (a % b == 0) { //만약 a와 b를 나누었을 때 나머지가 0이라면 
                printf("GCD: %d\n", b); //b를 출력하라
                break; //if문이 참일 시 반복문 종료
            }
            //a와 b를 나누었을 때 나머지가 0이 아니라면
            temp = a; // temp 값을 a로 초기화
            a = b; //a의 값을 b로 초기화
            b = temp % b; //b = temp와 b를 나눈 나머지
            //a와 b의 값을 바꾸는 것을 응용하여 만듦.
        }
    }

    if (b > a) { //만약 b가 a보다 크다면{} 실행 a와 b가 위 if절과 반대
        while (a != 0) {
            if (b % a == 0) {
                printf("GCD: %d", a);
                break;
            }

            temp = b;
            b = a;
            a = temp % b;
        }
    }

    return 0;
}