//Modulus Operator % - Deep Dive
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a = 17;
	int b = 5;
	int c = 100;
	int d = 10;
	int e = -7;
	int f = 2;
	int n;

	printf("remainder");
	printf("a %% b = %d\n", a%b); //2
	printf("c %% d = %d\n", c%d); //0 perfectly divisible
	printf("e %% f =%d\n\n", e % f); // -1 sign follows

	printf("Common uses:\nType n:");
	scanf("%d", &n);
	if (n % 2 == 0)
		printf("It's even");
	else
		printf("it's odd");

	return 0;
}