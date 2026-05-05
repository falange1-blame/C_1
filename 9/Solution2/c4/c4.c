//문자열 반전
#include <stdio.h>
#include <string.h>

void reverse_string(char s[])
{
	int i, j;
	char temp;
	int len = strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--) // i: 0 idx j: 98 idx i==j 순간까지 포함
	{
		temp = s[i]; //temp를 이용한 교환 temp에 먼저 바뀔 값 넣기
		s[i] = s[j];
		s[j] = temp;
	}
}

/* swap s[i] and s[j] */
int main(void)
{
	char buf[100] = "Hello, World!"; //0~99 99 idx = '\0'

	reverse_string(buf); //fuction

	printf("%s\n", buf);
	/* "!dlroW ,olleH" */
	return 0;
}