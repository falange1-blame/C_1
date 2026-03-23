//Ternary Operator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	printf("Type a:   \n");
	scanf("%d", &a);

	printf("Type b:   \n");
	scanf("%d", &b);
	
	int bigger = (a > b) ? a : b; //not good C code

	printf("\n");
	printf("bigger one is %d\n", bigger);

	return 0;
}
