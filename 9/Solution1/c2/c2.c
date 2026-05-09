//Say My Name
#define _CRT_SECURE_NO_WARNINGS
#include <Stdio.h>

int main(void) {
	char name[50];

	printf("Please Type your Name: ");
	scanf("%s", &name[0]);
	printf("My name is: %s\n", name);

	return 0;
}