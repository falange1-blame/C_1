//Casting Challenge, predict the result
#include <stdio.h> // library gor input and output

int main() // declare main function
{
	int a = 7; // declare variable a and initialize 7 in 4bytes size int 
	int b = 2; // declare variable b and initialize 2 in 4bytes size int

	printf("%d\n", a/b); // 3
	printf("%.1f\n", (double)a / b); // 3.5
	printf("%.1f\n", a / (double)b); // 3.5
	printf("%.1f\n", (double)(a / b)); // 3.0 because the division is done before the cast

	return 0;
}