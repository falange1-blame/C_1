#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a;

    scanf("%f", &a);
    printf("%d\n%f", (int)a, a - (int)a);

    return 0;
}