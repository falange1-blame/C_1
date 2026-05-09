#include <stdio.h>
#include <stdlib.h>
/* Copy src[0..n-1] into dst using pointers */
void ptr_copy(int* dst, const int* src, int n)
{
	const int *end = src + n;
	while (src < end)
		*dst++ = *src++;   /* copy and advance both */
}

/* Fill array with a value */
void ptr_fill(int* arr, int n, int val)
{
	int* end = arr + n;
	while (arr < end)
		*arr++ = val;
}

int main(void)
{
    int src[] = { 10, 20, 30, 40, 50 };
    int dst[5];

    //copy
    ptr_copy(dst, src, 5);
    int i;
    for (i = 0;i < 5;i++) printf("%d ", dst[i]);
    printf("\n");

    //0으로 채우기
    ptr_fill(dst, 5, 0);
    for (i = 0;i < 5;i++) printf("%d ", dst[i]);
    printf("\n");
    return 0;
}
