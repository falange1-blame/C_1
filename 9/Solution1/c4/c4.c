//Array initialization
#include <stdio.h>

int main(void) {
	int a[5] = { 10, 20, 30, 40, 50 };
	//a의 0~4(5개)까지 {}내용을 대응
	int b[5] = { 1, 2 };
	//b의 0,1 에 1과 2를 대응 나머지는 0으로 채움
	//{ 1, 2, 0, 0, 0}
	int c[5] = { 0 };
	//all zeros
	int d[] = { 1, 2, 3 };
	//size는 3으로 자동으로 해준다.
	int i = 0;

	for (i = 0; i < 5; i++) {
		printf("a is : %d\n", a[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("b is : %d\n", b[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("c is : %d\n", c[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("d is : %d\n", d[i]);
	}

	return 0;
}