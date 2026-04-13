#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int season;

    scanf("%d", &season);

    switch (season)
    {
    case 3:
    case 4:
    case 5:
        printf("Spring\n");
        break;

    case 6:
    case 7:
    case 8:
        printf("Summer\n");
        break;

    case 9:
    case 10:
    case 11:
        printf("Autumn\n");
        break;

    case 12:
    case 1:
    case 2:
        printf("Winter\n");
        break;

    default:
        printf("Invalid month\n");
        break;
    }

    return 0;
}