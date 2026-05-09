//Array Declaration and Indexing
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	//int arr[5] = { 0 }; // 5 elements, 0 ~ 4 (NOT 1~5)
	
	//Declaration: type name [size];
	int score[5]; //정수형 자료형 4Byte를 5개 (0~4) 선언
	double temp[100]; //실수형 자료형 double(8byte) 100개 (0~99) 선언
	char name[50]; //문자형 자료형 char(1Byte) 50개 (0~49) 선언

	int i = 0;

	//Indexing: name[index] (index starts at 0!)
	score[0] = 95; //첫번째 element인 0에 값 초기화
	score[1] = 55;
	score[2] = 44;
	score[3] = 85;
	score[4] = 72; //마지막 element(size - 1)
	//score[5] = 0; //Out if Bounds - undefined behavior!
	for (i = 0; i < 5; i++) {
		printf("Score is %d\n", score[i]); //score의 각 index에 대응되는 값을 출력 후 줄 바꿈
	}

	for (i = 0; i < 100; i++) {
		temp[i] = i + 1; 
		//double temp의 각 index위치에는 index + 1의 값이 들어간다
	}
	for (i = 0; i < 100; i++) {
		printf("Temp is : %lf\n", temp[i]);
	}

	printf("Please Type Your Favorite Book: ");
	scanf("%s", &name[0]); //name의 0번째 주소부터 저장
	printf("Wow! %s is a wonderful Book!\n", name);

	return 0;
}