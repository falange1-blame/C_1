//Second Largest
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int N;
    scanf("%d", &N);
    int number[N]; //0~N
    int max1;
    int max2;
    int i;

    scanf("%d", &number[0]);
    max1 = number[0];
    max2 = number[0];

    for (i = 1; i < N; i++) {
        scanf("%d", &number[i]);

        if (number[i] > max1) {
            max2 = max1;
            max1 = number[i];
        }
        else if (number[i] < max1 && (max2 == max1 || number[i] > max2)) {
            max2 = number[i];
        }
    }

    printf("Second: %d\n", max2);

    return 0;
}
