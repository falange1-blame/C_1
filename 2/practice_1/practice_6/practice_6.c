// Hex & Overflow
#include <stdio.h> // library gor input and output

int main() // declare main function
{
	printf("Part A\n\n");// Part A: Print 255 in decimal, octal, anf hex
	int a = 255; // declare variable a and initialize 255 in 4bytes size int

	printf("%d\n", a); // 255
	printf("%o\n", a); // 377
	printf("%x\n", a); // ff
	printf("%X\n", a); // FF
	
	printf("---------------------\n");

	printf("Part B\n\n");//Part B: Demonstrate overflow
	char c = 127; // declare variable c and initialize 127 in 1byte size char
	c = c + 1; // overflow, c becomes -128

	printf("%d\n", c); // -128

	return 0;

}