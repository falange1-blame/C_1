#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
intmain(void)
{
	chargrade;
	printf("Grade (A/B/C/D/F): ");
	scanf(" %c", &grade);
	switch (grade)
	{
	case'A':
	case'B':
		printf("Scholarship eligible\n");
		break;
	case'C':
		printf("Satisfactory\n");
		break;
	case'D':
	case'F':
		printf("Needs improvement\n");
		break;
	default:
		printf("Invalid grade\n");
	}
	return0;