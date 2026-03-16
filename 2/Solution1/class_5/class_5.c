//float vs double Precision
#include <stdio.h>

int main(void)
{
	float  f = 3.141592653589793f; //suffix f
	double d = 3.141592653589793;

	printf("float:  %.15f\n", f); //.15 digits -> inaccurate after 7 digits
	printf("double: %.15f\n", d); //.15 digits -> accurate to 15 digits
	return 0;
	
}