//& and * Operators
#include <stdio.h>

int main(void)
{
	int x = 42;
	int *p = &x;         /* p points to x */

	printf("x    = %d\n", x);          //42
	printf("&x   = %p\n", (void*)&x);  // x의 주소값 출력
	printf("p    = %p\n", (void*)p);   // same address 포인터로 하느냐 &로 하느냐 차이
	printf("*p   = %d\n", *p);         /* 42 — value at p */

	*p = 100;           /* change x THROUGH p 포인터를 활용하여 value 바꾸기*/
	printf("x now = %d\n", x);          /* 100! */
	return 0;
}