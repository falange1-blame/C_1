#include <stdio.h>
void print_array(int* p, int n)   /* works with array too */
{
	int i;

	for (i = 0; i < n; i++)
		printf("%d ", p[i]);    /* pointer[i] same as *(p+i) */
	printf("\n");
}
int main(void)
{
	int a[] = { 1, 2, 3, 4, 5 };

	/* Both calls are identical */
	print_array(a, 5);   /* array name = &a[0] */
	print_array(&a[0], 5);  /* explicit first element address */

	/* pointer notation on array */
	printf("a[2]   = %d\n", a[2]);      /* 3 */
	printf("*(a+2) = %d\n", *(a + 2));    /* 3 */

	return 0;
}