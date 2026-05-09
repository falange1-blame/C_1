//1~N 까지의 소수의 개수
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N; //정수형 자료형 N 선언
    int i = 0; // 정수형 자료형 i 선언 동시 초기화
    int j = 0; // 정수형 자료형 j 선언 동시 초기화
    int isprime = 0; // 정수형 자료형 isprime 선언 동시 초기화 bool
    int prime = 0; // 정수형 자료형 prime 선언 동시 초기화

    scanf("%d", &N); //N의 주소값에 정수 선언 후 기화

    for (i = 2; i <= N; i++) { //i =2 초기화; i가 n보다 작거나 같으면 반복; i++
        isprime = 1; //일단 무조건 소수라고 가정하고 반복 

        for (j = 2; j * j <= i; j++) { //j =2 초기화; j^2이 i(n)보다 작거나 같으면 반복; i++

            if (i % j == 0) { //만약 i와 j가 나누어 떨어지면 (사실상 i^2 % N == 0)
                isprime = 0; //isprime은 소수가 아니다.
                break; //if문이 참이면 두 번째 반복문 중단
            }
        }

        if (isprime == 1) { //첫 번째 for문의 상단과 두 번째 for문을 거친 뒤 isprime이 참이라면
            prime++; //prime 변수의 값을 1씩 올려라
        }
    }

    printf("Primes <= %d: %d\n", N, prime);

    return 0;
}