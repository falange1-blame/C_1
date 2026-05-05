//숫자는 str str은 숫자
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>   /* atoi, atof */
#include <string.h>

int main(void)
{
	char s1[] = "123"; //0~3 idx 3 = '\0' 
	char s2[] = "3.14";
	char buf[20];
	/* String to number */
	int n = atoi(s1);     /* "123"  → 123  */
	double d = atof(s2);   /* "3.14" → 3.14 */
	printf("atoi: %d\n", n);
	printf("atof: %.2f\n", d);
	
	/* Number to string: use sprintf */
	int score = 95; // 정수형 자료 선언 동시 초기화
	sprintf(buf, "Score: %d", score);   /* like printf but to string */
	//score 정수값을 "Score: 숫자" 형태의 문자열로 만들어서 buf 배열에 저장한다.
	printf("sprintf: %s\n", buf);
	printf("length:  %lu\n", strlen(buf)); //buffer의 len
	
	return 0;
}