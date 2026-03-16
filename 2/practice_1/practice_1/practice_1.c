//Write a program that prints the size(bytes) of: short, int, long, long long, float, double, char
#include <stdio.h> //library for input and output

int main(void) //main function
{
	printf("Size of short:        %d\n", (int)sizeof(short));
	printf("Size of int:          %d\n", (int)sizeof(int));
	printf("Size of long:         %d\n", (int)sizeof(long));
	printf("Size of long long:    %d\n", (int)sizeof(long long));
	printf("Size of float:        %d\n", (int)sizeof(float));
	printf("Size of double:       %d\n", (int)sizeof(double));
	printf("Size of char:         %d\n", (int)sizeof(char));
	return 0;
}