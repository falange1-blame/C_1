//Print with variables of 4 basic data types
#include <stdio.h>
int main()
{
	int score = 98;
	float gpa = 3.75;
	double temp = 36.5837;
	char initial = 'K';

	printf("Score:   %d\n", score);
	printf("GPA:     %.2f\n", gpa); //%% to print a literal % character
	printf("Temp:    %.2f\n", temp); //%% to print a literal % character
	printf("Initial: %c\n", initial);
	return 0;
}