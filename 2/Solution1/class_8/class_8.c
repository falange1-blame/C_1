//define vs const
#include <stdio.h>

//Method 1: preprocessor macro (no type, no semicolon)
#define PI        3.14159
#define MAX_SIZE  100
#define GREETING  "Hello"
	
int main(void)
{
	//Method 2: const variable (has type, has semicolon)
	const double PI =       3.14159;
	const int    MAX_SIZE = 100;

	//Usuage
	double area = PI * r * r;
	int    buf[MAX_SIZE];
}
//const variables are preferred in embededsystem, because const saves memory on ROM(flash, read-only memory), so it can efficiently use RAM.
