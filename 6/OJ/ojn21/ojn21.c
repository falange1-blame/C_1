#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char name[50];  // 문자열(이름) 저장용 배열
    int s1, s2, s3;

    scanf("%s %d %d %d", name, &s1, &s2, &s3);  // 문자열은 & 없이

    // 여기에 출력 코드를 작성하세요
    printf("==== Student Score Report ====\n");
    printf("Name: %-15s\n", s1);
    printf("------------------------------\n");
    printf("%-15s %8d\n", "Subject 1:", s1);
    printf("%-15s %8d\n", "Subject 2:", s2);
    printf("%-15s %8d\n", "Subject 3:", s3);
    printf("------------------------------\n");
    printf("%-15s %8d\n", "Total:", s1 + s2 + s3);
    printf("%-15s %8.2f\n", "Average:", (double)(s1 + s2 + s3) / 3.0);

    return 0;
}