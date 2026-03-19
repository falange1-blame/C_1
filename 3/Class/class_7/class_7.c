//Self Practice
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> //library for input and output

int main(void) //void main
{
	int young = 40;
	int old   = 99;
	int a;

	printf("How old are you?: ");
	scanf("%d", &a);

	if (a <= young && a > 0)
		printf("You are young!!");
	else if (a > young && a <= old)
		printf("You are old!!");
	else if (a > old)
		printf("You are LEGEND!!!!");
	else
		printf("I think you type wrong...");

	return 0;
}