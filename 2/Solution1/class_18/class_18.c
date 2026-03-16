//typedef - Type Aliases (타입 별칭)
#include <stdio.h>

int main(void)
{
	// typedef creates an alias(별명) for existing types
	typedef unsigned int unit;
	typedef unsigned char byte;
	unit count = 100; //count is an alias for unsigned int
	byte flag = 0xFF; //flag is an alias for unsigned char

	printf("%d\n", count);
	printf("%c\n", flag);

	return 0;
}

//Commonly used with struct
typedef struct { int x; int y; } Points;
Points p1 = { 10, 20 }; //no need to write "struct"