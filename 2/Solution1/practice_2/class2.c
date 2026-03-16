//Mixing signed and unsigned make subtle bugs
#include <stdio.h> //library for input and output

int main(void)
{
	unsigned int u = 4294967295U; //maximum value of unsigned int, put suffix U for clarity
	int          s = -1; //signed int with value -1

	printf("unsigned: %u\n", u); //prints value of u 
	printf("signed:   %d\n", s); //prints value of i

	//*Mixing causes subtle bugs!
	if (s < u) //signed: -1 < unsigned 4294967295
		printf("s < u\n");
	else
		printf("s >=  (unexpexted!)\n");
	//In comparison, signed becomes to unsigned
	// by 2's complement -1 becomes 4294967295,
	// so u = s -> unexpected result!
	return 0;
}