#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{

	char name[50]; // 0~49
	char greeting[100]; // 0~99

	/* scanf는 공백문자까지 읽는다  reads until whitespace — no spaces */
	printf("Name (no spaces): ");
	scanf("%s", name);
	getchar(); //버퍼에 남은 엔터 제거
	/* no & needed for arrays */

	/* fgets reads whole line including spaces */
	printf("Greeting: ");
	fgets(greeting, sizeof(greeting), stdin);

	/* Output */
	printf("Hello, %s!\n", name); //공백문자 나오면 더 읽지 않음
	printf("You said: %s", greeting);// \0 나올 때까지 읽음
	printf("Name length: %lu\n", strlen(name)); //name의 길이 출력

	return 0;
}