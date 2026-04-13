#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int score;

    scanf("%d", &score);

    if (score >= 0 && score <= 100) {
        switch (score / 10)
        {
        case 10:
        case 9:
            printf("Grade: A\n");
            break;

        case 8:
            printf("Grade: B\n");
            break;

        case 7:
            printf("Grade: C\n");
            break;

        case 6:
            printf("Grade: D\n");
            break;

        default:
            printf("Grade: F\n");
            break;
        }
    }
    else printf("Invalid score\n");

    return 0;
}