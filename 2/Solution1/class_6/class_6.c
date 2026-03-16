//Scientific Notation Literals
#include <stdio.h>

int main(void)
{
	double big   = 1.5e6; //1.5*10^6
	double small = 2.5e-3; //2.5*10^-3
	double c     = 3.0e8; //speed of light

	printf("big:    %.0f\n", big); //0 digits
	printf("small:  %.4f\n", small); //4 digits
	printf("c:      %.2e m/s\n", c); //2 digits
	return 0;
}