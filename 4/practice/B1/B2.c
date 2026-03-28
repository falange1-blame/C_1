#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name[50];
	int S1;
	int S2;
	int S3;
	
	scanf("%s", name);
	scanf("%d", &S1);
	scanf("%d", &S2);
	scanf("%d", &S3);

	printf("===== Student Score Report =====\n");
	printf("%-15s%-15s\n", "Name:", name);
	printf("----------------------------------\n");
	printf("%-15s%8d\n", "Subject 1:", S1);
	printf("%-15s%8d\n", "Subject 2:", S2);
	printf("%-15s%8d\n", "Subject 3:", S3);
	printf("----------------------------------\n");
	printf("%-15s%8d\n", "Total:", S1 + S2 + S3);
	printf("%-15s%8.2f\n", "Average:", (S1 + S2 + S3)/3.0);
	printf("==================================\n");
}