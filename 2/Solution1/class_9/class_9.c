//Type Conversion
#include <stdio.h>

int main(void)
{
	//Implicit(automatic) conversion
	int    i = 5;
	double d = i; //int -> double: safe, no data loss
	//smaller -> bigger type: safe, no data loss
	//bigger -> smaller type: risky, possible data loss
}