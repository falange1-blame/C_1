//Return Multiple Values via Pointers

#include <stdio.h>
/* Returns min and max through pointers */
void minmax(int a[], int n, int* min_out, int* max_out)
{
	int i;
	*min_out = *max_out = a[0]; //동일한 주소로 초기화
	for (i = 1; i < n; i++) //주소 위치 뱐화를 위함
	{
		if (a[i] < *min_out) *min_out = a[i];
		if (a[i] > *max_out) *max_out = a[i];
	}
}
int main(void)
{
	int data[] = { 5, 2, 8, 1, 9, 3 };
	int lo, hi;
	minmax(data, 6, &lo, &hi); 
	//6칸짜리 값이 포함된 배열이 data
	printf("Min=%d  Max=%d\n", lo, hi); //주소값에 저장된 값 출력

	return 0;
}