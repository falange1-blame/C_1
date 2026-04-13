#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    char card1;
    char card2;
    int n1 = 0;
    int n2 = 0;

    scanf(" %c", &card1);
    scanf(" %c", &card2);

    switch (card1)
    {
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        n1 = card1 - '0';
        break;

    case 'T': case 't':
    case 'J': case 'j':
    case 'Q': case 'q':
    case 'K': case 'k':
        n1 = 10;
        break;

    case 'A': case 'a':
        n1 = 11;
        break;

    default:
        printf("Invalid card\n");
        break;
    }

    switch (card2)
    {
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        n2 = card2 - '0';
        break;

    case 'T': case 't':
    case 'J': case 'j':
    case 'Q': case 'q':
    case 'K': case 'k':
        n2 = 10;
        break;

    case 'A': case 'a':
        n2 = 11;
        break;

    default:
        printf("Invalid card\n");
        break;
    }

    printf("Card 1: %d\n", n1);
    printf("Card 2: %d\n", n2);
    if (n1 + n2 == 21) {
        printf("Total: %d (Blackjack!)\n", n1 + n2);
    }
    else if (n1 + n2 > 21) {
        printf("Total: %d (Bust)\n", n1 + n2);
    }
    else {
        printf("Total: %d\n", n1 + n2);
    }

    return 0;
}