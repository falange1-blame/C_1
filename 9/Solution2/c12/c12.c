
#include <stdio.h>
#include <ctype.h>
/* Convert digit string (with optional sign) to int */
int my_atoi(char s[])
{
	int i = 0, sign = 1, result = 0;

	while (s[i] == ' ' || s[i] == '\t') i++;       /* whitespace면 i++ 다음 idx char 읽기 */
	if (s[i] == '-') { 
		sign = -1; 
		i++; 
	}
	else if(s[i] == '+') i++; //숫자로 보이는 문자 idx로 이동

	while (isdigit((unsigned char)s[i])) //문자가 숫자형이라면
		result = result * 10 + (s[i++] - '0');    /* 정수 만들기 digit char -'0' */
		// 4 -> 4*10 +2
	return sign* result;
}

int main(void)
{
	printf("%d\n", my_atoi("123"));        /*  123 */
	printf("%d\n", my_atoi("  -42abc"));   /*  -42 */
	return 0;
}