#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int lev;
    int price;
    int dis = 0;
    int dis_num = 0;

    scanf("%d", &lev);
    scanf("%d", &price);

    switch (lev)
    {
    case 1:
        dis = 5;
        dis_num = price * (100 - dis) / 100;
        break;

    case 2:
        dis = 10;
        dis_num = price * (100 - dis) / 100;
        break;

    case 3:
        dis = 15;
        dis_num = price * (100 - dis) / 100;
        break;

    case 4:
        dis = 20;
        dis_num = price * (100 - dis) / 100;
        break;

    default:
        printf("Invalid membership\n");
        break;
    }



    if (price >= 100000) {
        printf("Discount: %d%%\n", dis + 5);
        printf("Final: %d won\n", price * (100 - (dis + 5)) / 100);
    }
    else if (price < 100000) {
        printf("Discount: %d%%\n", dis);
        printf("Final: %d won\n", dis_num);
    }

    return 0;
}