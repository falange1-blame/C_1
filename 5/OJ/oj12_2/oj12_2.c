#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a;

    scanf("%f", &a);
    printf("%d\n%f", (int)a, a - (int)a);

    return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    float a;
    int integer_part;
    float decimal_part;

    scanf("%f", &a);

    integer_part = (int)a;
    decimal_part = a - integer_part;

    printf("%d\n%f", integer_part, decimal_part);

    return 0;
}
*/