//Time Duration Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int time;
    int hour;
    int minute;
    int sec;

    printf("Type sec:   ");
    scanf("%d", &time);

    hour = time / 3600;
    minute = (time % 3600) / 60;
    sec = time % 60;

    printf("Time: %02d:%02d:%02d\n", hour, minute, sec);

    return 0;
}

/* T.A. Solution
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int total;
    scanf("%d", &total);

    int h, m, s
    h = total / 3600;
    m = (total % 3600) / 60;
    s = total % 60;

    printf("%02d:%02d:%02d\n", h, m, s);
}

*/