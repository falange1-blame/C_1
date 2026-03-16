//Explicit Casting
#include <stdio.h>

int main(void)
{
	int    a = 7;
	int    b = 2;
	double d = 9.99;

    printf("int div:       %d\n", a / b); //3
	printf("cast first:    %.1f\n", (double)a / b); //3.5
	printf("cast other:    %.1f\n", a / (double)b); //3.5
	printf("cast result:   %.1f\n", (double)(a / b)); //3.0, because division happens first, then cast to double
	printf("truncate:      %d\n", (int)d); //9

	return 0;

}