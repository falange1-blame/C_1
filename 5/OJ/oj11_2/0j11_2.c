#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	char sen[2001]; // 1Byte 문자 자료형 2001개 선언 -> 총 2000자

	scanf("%[^\n]s", sen); // sen의 0번째 주소에 하나씩 대응하여 선언 후 초기화
	// %[^\n]은 엔터 문자 이전까지의 문자는 전부 읽기 -> 공백문자도 읽음
	printf("%s\n", sen);

	return 0;
}