//Reverse Print
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int n;
    scanf("%d", &n);

    int number[n];
    int i = 0;

    for (i = 0; i < n; i++) {
        scanf("%d ", &number[i]);
    }

    for (i = n - 1; i >= 0; i--) {
        printf("%d ", number[i]);
    }
    printf("\n");

    return 0;
}
