#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
intmain(void)
{
	char choice;
	printf("Menu: (a)dd  (s)ubtract  (q)uit\n");
	printf("Choice: ");
	scanf(" %c", &choice);
	switch (choice)
	{
	case'a': case'A':
		printf("Addition selected\n");
		break;
	case's': case'S':
		printf("Subtraction selected\n");
		break;
	case'q': case'Q':
		printf("Quitting...\n");
		break;
	default:
		printf("Unknown option\n");
	}
	return0;