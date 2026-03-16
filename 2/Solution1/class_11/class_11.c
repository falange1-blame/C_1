//The integer division trap
#include <stdio.h>

int main(void)
{
	int a = 7;
	int b = 2;
	double result = a / b; //result = 3.0, NOT 3.5!
						   //division happens first
	printf("%.1f\n", result);
	/*
	Correct Way!
	double result = (double)a / b; -> = 3.5
	*/
	return 0;
}