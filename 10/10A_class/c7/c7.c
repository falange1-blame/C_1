//Pointer Arithmetic
#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int *p = a;             /* p → a[0] */
	int i;
	
	/* Traverse with pointer arithmetic */
	for (i = 0; i < 5; i++)
		printf("%d ", *(p + i));   /* same as a[i] p = a[0]와 동일*/
	printf("\n");

	/* Pointer increment */
	p = a;                  /* reset to start */
	while (*p != 50) //마지막 값 전까지 출력
	{
		printf("%d ", *p); //p[0] , p[1], ... 출력
		p++;                /* move to next element */
	}
	printf("%d\n", *p);   /* 50 */

	/* Pointer difference */
	int *q = &a[3];
	printf("q -a = %ld elements\n", q - a);   /* 3  q = a[3] i.g 3 - 0*/ 

	return 0;
}