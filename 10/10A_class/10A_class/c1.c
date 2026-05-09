/* int x = 42;
   int *p = &x; p는 memory 주소 x의 값을 포함한다.*/

#include <stdio.h>

int main(void)
{
	int a = 10; 
	double b = 3.14;
	char c = 'X';

	/* %p prints address in hex */
	printf("a = %d,  address = %p\n", a, (void*)&a);
	//%p는 포인터 배열 void는 자료형 선언 없어도 가능 주소값 출력
	printf("b = %.2f, address = %p\n", b, (void*)&b);
	printf("c = %c,  address = %p\n", c, (void*)&c);
	printf("sizeof(int)    = %lu\n", sizeof(int)); //4
	printf("sizeof(double) = %lu\n", sizeof(double));//8
	printf("sizeof(char)   = %lu\n", sizeof(char));//1

	return 0;
}