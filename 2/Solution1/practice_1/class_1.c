//int's min and max values
#include <stdio.h> //library for input & output
#include <limits.h> //library for limits

int main(void) //declare main function
{
	printf("int size:   %d bytes\n", (int)sizeof(int)); //print size of int in bytes
	printf("int min:    %d\n", INT_MIN); //print minimum value of int
	printf("int max:    %d\n", INT_MAX); //print maximum value of int

	return 0; //return 0 to finish programs
}