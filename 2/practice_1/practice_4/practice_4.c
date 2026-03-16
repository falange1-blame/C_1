//Circle Calculator, read radius r from user(double)
#define PI 3.14159 // define constant for pi
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // library for input and output

int main() 
{
	double r; // declare variable r in double type which is 8 bytes
	printf("Radius:           ");
	scanf("%lf", &r); // initialize r after declaring, save the value in address of r
	
	printf("Circumference:    %.2f\n", 2 * PI * r);
	printf("Area:             %.2f\n", PI * r * r);

	return 0;
}
