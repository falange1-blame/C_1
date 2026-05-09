#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 42;
	int *pi = &x; //X의 주소값 저장
	char c = 'A';
	char *pc = &c; //C의 주소값 저장
	double d = 3.14;
	double *pd = &d; //d의 주소값 저장

	/* All pointer sizes same on a given platform */
	printf("sizeof(int*)    = %lu\n", sizeof(pi));   /* 8 포인터 변수의 크기 */
	printf("sizeof(char*)   = %lu\n", sizeof(pc));   /* 8 포인터 변수의 크기 */
	printf("sizeof(double*) = %lu\n", sizeof(pd));   /* 8 포인터 변수의 크기 */
	/* Size of pointed-to type varies */
	printf("sizeof(*pi) = %lu\n", sizeof(*pi));  /* 4 int형의 주소값 크기*/
	printf("sizeof(*pc) = %lu\n", sizeof(*pc));  /* 1 char형의 주소값 크기*/
	printf("sizeof(*pd) = %lu\n", sizeof(*pd));  /* 8 double형의 주소값 크기*/

	/* Safe malloc pattern */
	int *arr = (int*)malloc(10 * sizeof(*arr)); //arr의 pointer의 주소값은 malloc(10 * 4)
	free(arr);
	return 0;
}