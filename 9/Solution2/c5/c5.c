//문장의 구성요소 개수 파악
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char s[100]; // 0~99 99 idx = '\0' 
	int i;
	int letters = 0, digits = 0, spaces = 0, others = 0;
	
	printf("Enter string: ");
	fgets(s, sizeof(s), stdin); //문장 입력, 문장 읽고 엔터도 읽음
	
	for (i = 0; s[i] != '\0' && s[i] != '\n'; i++)
		//문자열 끝('\0')을 만나거나 줄바꿈('\n')을 만나기 전까지만 검사한다
	{
		if (isalpha(s[i])) letters++;
		else if (isdigit(s[i])) digits++;
		else if (isspace(s[i])) spaces++;
		else others++;
	}
	printf("Letters: %d\n", letters);
	printf("Digits:  %d\n", digits);
	printf("Spaces:  %d\n", spaces);
	printf("Others:  %d\n", others);
	return 0;
}