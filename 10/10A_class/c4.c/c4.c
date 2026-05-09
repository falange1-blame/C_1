/*
void swap(int a, int b)
{
	int tmp = a;
	a = b;
	b = tmp;
}  
메인 함수 내부
int x = 1, y = 2;
swap(x, y);
 x is still 1, y is still 2! 원본은 그대로 copy만 바뀜
 */ 

#include <stdio.h>
void swap(int* a, int* b)   /* receive ADDRESSES 주소를 받기 -> 주소 내부를 고치니깐 원본도 바뀐다*/
{
	int tmp = *a;            /* dereference to get values */
	*a = *b;
	*b = tmp;
}
int main(void)
{
	int x = 1, y = 2;
	printf("Before: x=%d y=%d\n", x, y);
	swap(&x, &y);            /* pass ADDRESSES */
	printf("After:  x=%d y=%d\n", x, y);  /* 2 1 원본 바뀜 pass by reference*/
	return 0;
}