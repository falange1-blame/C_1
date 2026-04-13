//피보나치 수열 // 특징: f(1)= 1, f(2)= 1, f(3) = 2, f(4) = 3, f(5) = 5, f(6) = 8 ...
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N; //정수형 N 선언
    int i; //정수형 i 선언
    int a = 1; //정수형 a 선언 동시 초기화
    int b = 1; //정수형 b 선언 동시 초기화
    int fibo; //정수형 fibo 선언

    scanf("%d", &N); //N의 주소에 정수 선언 후 초기화

    for (i = 3; i <= N; i++) { //i = 3초기화; i가 N보다 작거나 같으면 반복 , i++ 즉, f(1)과 f(2)는 그대로 1로 출력

        fibo = a + b; //피보나치 수열은 f(N) = f(N-2) + f(N-1)
        a = b; // 다음 사이클을 위하여 f(N-2)를 이전 사이클의 f(N-1)로 초기화
        b = fibo; // 다음 사이클에서는 f(N-1)이 현재 사이클의 f(N)
    }

    printf("F(%d) = %d\n", N, b);
    return 0;
}