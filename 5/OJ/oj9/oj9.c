#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int front;
	int back;

	scanf("%d-%d", &front, &back);
	printf("%06d%07d\n", front, back);

	return 0;
}

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char front[7];
	char back[8];

	scanf("%6s-%7s", front, back);
	printf("%s%s\n", front, back);

	return 0;
}
*/