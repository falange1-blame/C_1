//++/--: Watch the Tricky Cases
#include <stdio.h>

int main(void)
{
	int a = 5;
	int b;
	int c;
	b = ++a;//b = 6, a = 6

	printf("a = %d b = %d\n", a, b);//a = 6 b = 6

	c = a++;//a = 7, c = 6
	printf("a = %d c = %d\n", a, c);//a = 7, c = 6

	/*
	 DANGEROUS — undefined behavior in C:
	 int x = 5; int y = x++ + ++x;  DON'T DO THIS!
	*/

	// Good practice: use ++ on its own line
	int x = 5;
	x++;
	int y = x + x; //y = 12
	printf("x = %d y = %d\n", x, y); //x = 6, y = 12

	return 0;
}