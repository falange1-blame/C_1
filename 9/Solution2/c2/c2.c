//fgets(str, n, stin): reads one line fro stdin 뛰어쓰기 읽기 가능
#include <stdio.h>
#include <string.h>

int main(void) {
	/* fgets(str, size, stdin); str char array(buffer) 문장 저장 위해서
	size: 최대로 읽응ㄹ 수 있는 문자 수 */

	char name[50];
	char name1[50];
	fgets(name, 50, stdin); // 0~49 idx read
	fgets(name1, sizeof(name), stdin); // size of can avoids magic number
	name1[strlen(name) - 1] = '\0';
	/*fgets()는 마지막 인덱스에 \n이 들어옴.
	만약 \0를 원하면 name[strlen(name)-1] = '\0';*/

	printf("%s", name);
	printf("haha");
	printf("\n");
	printf("%s", name1);
	printf("haha");

	return 0;
}