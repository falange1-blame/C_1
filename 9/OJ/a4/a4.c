//Count Occurrences
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N;
    scanf("%d", &N);
    int a[N];
    int pre[30] = { 0 };
    int i;
    int idx;

    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        pre[a[i]]++;
    }

    scanf("%d", &idx);
    printf("Count: %d\n", pre[idx]);
    return 0;
}