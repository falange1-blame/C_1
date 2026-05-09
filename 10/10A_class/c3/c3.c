//Multiple Pointers
#include <stdio.h>

int main(void)
{
	int x = 10, y = 20;
	int *p = &x;       /* p → x */
	int *q = &y;       /* q → y */

	printf("*p=%d  *q=%d\n", *p, *q);   /* 10 20 */

	/* Pointer assignment: make p point to y */
	p = &y;            /* p now → y p의 주소값 변경*/
	printf("*p=%d\n", *p);              /* 20 */

	/* Two pointers to same variable */
	q = &x;            /* q now → x too */
	*q = 99;           /* changes x */
	printf("x=%d  *p=%d\n", x, *p);    /* *p is y=20, x=99 */
	
	return 0;
}