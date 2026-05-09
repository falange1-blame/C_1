//Sum of Diagonal
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N][N]; // 0 ~ N-1
    int i, j;
    int sum = 0;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
        sum += a[i][i];
    }

    printf("Diagonal: %d\n", sum);

    return 0;
}