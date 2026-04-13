#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    int input;
    int menu;
    
    int Coffee = 1500;
    int Tea = 1200;
    int Juice = 2000;
    int Water = 800;

    scanf("%d", &menu);
    scanf("%d", &input);

    switch (menu)
    {
    case 1:
        if (input >= Coffee)
        {
            printf("Dispensing... Change: %d won\n", input - Coffee);
        }
        else if (input < Coffee)
        {
            printf("Insufficient! Need %d more won\n", 1500 - Coffee);
        }
        break;

    case 2:
        if (input >= Tea)
        {
            printf("Dispensing... Change: %d won\n", input - Tea);
        }
        else if (input < Tea)
        {
            printf("Insufficient! Need %d more won\n", Tea - input);
        }
        break;

    case 3:
        if (input >= Juice)
        {
            printf("Dispensing... Change: %d won\n", input - Juice);
        }
        else if (input < Juice)
        {
            printf("Insufficient! Need %d more won\n", Juice - input);
        }
        break;

    case 4:
        if (input >= Water)
        {
            printf("Dispensing... Change: %d won\n", input - Water);
        }
        else if (input < 800)
        {
            printf("Insufficient! Need %d more won\n", Water - input);
        }
        break;

    default:
        printf("Invalid selection!\n");
        break;
    }

    return 0;
}