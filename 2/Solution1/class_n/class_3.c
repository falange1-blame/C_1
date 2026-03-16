// Integer Overflow
#include <stdio.h>

int main(void)
{
	int x = 2147483647; //INT_MAX
	x = x + 1; //Overflow

	printf("%d\n:", x);
	return 0;
}