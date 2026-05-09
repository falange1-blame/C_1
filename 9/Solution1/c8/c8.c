//Prefix Sum: Range Queries
#include <stdio.h>
#define N 8
int main(void)
{
	int a[N] = { 3, 1, 4, 1, 5, 9, 2, 6 };
	int psum[N + 1] = { 0 };   /* psum[0] = 0; psum[k] = a[0]+..+a[k-1] */
	int i, l, r;
	
	/* Build prefix sums in one O(n) pass */
	for (i = 0; i < N; i++)
		psum[i + 1] = psum[i] + a[i]; //직관적인 수
	
	/* Range sum a[l..r] = psum[r+1] -psum[l]  --O(1) per query */
	l = 2; r = 5;
	printf("a[%d..%d] = %d\n", l, r, psum[r + 1] - psum[l]); //23 - 4
	l = 0; r = 7;
	printf("%d %d", psum[r + 1], psum[l]);
	printf("total    = %d\n", psum[r + 1] - psum[l]); // 31-0
	return 0;
}