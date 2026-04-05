#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char sen[2001];

	fgets(sen, sizeof(sen), stdin); //엔터 문자도 문자열의 일부로 받아들인다
	//standard input output으로부터 문자열을 입력받아서 배열 sen에 저장하되 sizeof(sen)-1의 길이(마지막은 \0)만큼 저장하라
	printf("%s", sen);

	return 0;
}

