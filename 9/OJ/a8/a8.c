#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int t[c][r];
    int i, j;

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            t[j][i] = a[i][j];
        }
    }

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%4d", t[i][j]);
        }
        printf("\n");
    }

    return 0;
}
