#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 추가 헤더가 필요하면 여기에 입력하세요 (예: #include <string.h>)

int main(void)
{
    double out = 0.0;
    double a;
    double b;
    char op;

    scanf("%lf %c %lf", &a, &op, &b);

    switch (op)
    {
    case '+':
        out = a + b;
        break;

    case '-':
        out = a - b;
        break;

    case '*':
        out = a * b;
        break;

    case '/':
        if (b == 0)
        {
            printf("Error: division by zero\n");
            return 1;
        }
        out = a / b;
        break;

    default:
        printf("Invalid operator!\n");
        return 1;
    }

    printf("%.2lf\n", out);
    return 0;
}