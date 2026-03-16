//sizeof() Operator
#include <stdio.h>

int main(void)
{
	int    x = 42;
	double d = 3.14;

	//Size of types
	printf("char:   %d bytes\n", (int)sizeof(char)); //1 byte
	printf("short:  %d bytes\n", (int)sizeof(short)); //2 bytes
	printf("int:    %d bytes\n", (int)sizeof(int)); //4 bytes
	printf("double: %d bytes\n\n", (int)sizeof(double)); //8 bytes

	//Size of variables
	printf("x: %d bytes\n", (int)sizeof(x)); //4 bytes
	printf("d: %d bytes\n", (int)sizeof(d)); //8 bytes

	return 0;
}