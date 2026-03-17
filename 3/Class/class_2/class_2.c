//#define with Expressions (Macro Functions)
#define SQUARE(x)  ((x) * (x))
#define SQUARE2(x)  (x * x)
#define MAX(a,b)   ((a) > (b) ? (a) : (b))
#define ABS(x)     ((x) >= 0 ? (x) : -(x))
#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = 3;

	printf("SQUARE(a)    = %d\n", SQUARE(a));      // (5)*(5) = 25
	printf("SQUARE2(a)   = %d\n", SQUARE2(a));     // (5 * 5) = 25
	printf("MAX(a,b)     = %d\n", MAX(a,b));       // 5
	printf("SQUARE(a+1)  = %d\n", SQUARE(a + 1));  //(5+1) * (5+1) = 36
	printf("SQUARE2(a+1) = %d\n", SQUARE2(a + 1)); //5 + 1 * 5 + 1 = 11

	return 0;
}