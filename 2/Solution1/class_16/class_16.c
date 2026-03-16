//union --Shared Memory
#include <stdio.h>

int main(void)
{
	union Data {
		int i; float f; char c; 
	};

	union Data d;
	d.i = 42; // now i is valid
	d.f = 3.14f; // f valid, i is overwritten
	//sharing last data types's memory
}