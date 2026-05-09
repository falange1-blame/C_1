#include <stdio.h>
int* find(int a[], int n, int target)
{
	int i;
	for (i = 0; i < n; i++)
		if (a[i] == target) return &a[i];  /* found */
	return NULL;                          /* not found */
}
int main(void)
{
	int data[] = { 3, 7, 2, 9, 5 };
	int *result = NULL; //Bettr way
	result = find(data, 5, 9);  
	// find 함수가 target이 있는 배열 원소의 주소를 반환
	// result에는 data[3]의 주소

	if (result != NULL)             /* always check! */
		printf("Found: %d\n", *result);
	else
		printf("Not found\n");
	return 0;
}