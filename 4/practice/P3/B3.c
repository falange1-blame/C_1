//Time Duration Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int time;
    int hour, minute, second;

    printf("Type sec:   ");
    scanf("%d", &time);

    hour = time / 3600;
    minute = (time % 3600) / 60;
    second = time % 60;

    printf("Time: %02d:%02d:%02d\n", hour, minute, second);

    return 0;
}