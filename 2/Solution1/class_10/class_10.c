//implicit type conversion cons
#include <stdio.h>

int main(void)
{
	int		i = 7;
	double	d = 2.5;
	double  result;

	result = i + d; // 7 -> 7.0, then 7.0 + 2.5 -> 9.5
	printf("%.1f\n", result);

	int truncated = 9.99; //9.99 -> 9, decimal part LOST!
	printf("%d\n", truncated);

	char c = 300; //300 overflows char: undefined!
	printf("%d\n", c);
	return 0;
	//not good example, because in C language's data prefer to be under int main(void)
}