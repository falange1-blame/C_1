//scanf() Examples
#include <stdio.h>

int main(void) 
{
	int age;
	double height;
	char grade;

	printf("Age: ");
	scanf("%d", &age);

	printf("Height (m): ");
	scanf("%lf", &height);

	printf("Grade: ");
	scanf(" %c", &grade);//space before %c to consume any leftover whitespace

	printf("age=%d, height=%.2f, grade=%c\n", age, height, grade);

	return 0;
}