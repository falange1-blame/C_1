//문장에 각 알파벳이 몇개나 들어가는지 세는 프로그램
#define _SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char s[100];
	int count[26] = { 0 }; //알파벳 개수가 26개 0~25 idx
	int i, c;

	fgets(s, sizeof(s), stdin);
	for (i = 0; s[i] != '\0'; i++)
	{
		c = tolower((unsigned char)s[i]); //대소문자 구분을 없애기 위해 모두 소문자로
		if (c >= 'a' && c <= 'z') count[c - 'a']++; // c는 a~z 가 가능, int로는 0~25
	}
	for (i = 0; i < 26; i++)
		if (count[i] > 0) //문장에 해당 알파벳 없으면 출력 안 하게
			printf("%c: %d\n", 'a' + i, count[i]);
	return 0;
}