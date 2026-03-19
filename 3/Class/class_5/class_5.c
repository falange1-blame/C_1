//Increasement & Decrement: ++ and --
#include <stdio.h>

int main(void)
{
	int a = 5;
	int b = ++a;
	
	printf("b = %d\na = %d\n\n", b, a); //b = 6 a = 6
	
	int c = a++;
	
	printf("c = %d\na = %d\n\n", c, a); //c = 6 a = 7

	return 0;
}