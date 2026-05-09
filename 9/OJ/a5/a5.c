//Shift Right By One
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N];
    int i;
    int temp;

    for (i = 1; i <= N; i++) {
        scanf("%d ", &a[i]);
        temp = a[N];
    }
    printf("%d ", temp);
    for (i = 1; i < N; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
