//Palindrome
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N]; //0 ~ N-1
    int i, j;
    int disc = 1;

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    for (j = 0; j < N / 2; j++) {
        if (a[j] != a[N - 1 - j]) {
            disc = 0;
            break;
        }
    }

    if (disc == 1) {
        printf("Palindrome: Yes");
    }
    else printf("Palindrome: No");

    return 0;
}