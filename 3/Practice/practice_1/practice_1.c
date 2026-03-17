//Change Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int Amount;
	//int rem; Betterway to use rem, beacause it can be used to calculate the change for each denomination without modifying the original Amount variable.
	printf("Enter the amount of money: ");
	scanf("%d", &Amount);

	//rem = Amount;
	printf("50000Won:   %d\n", Amount / 50000); 
	Amount %= 50000;
	printf("10000Won:   %d\n", Amount / 10000);
	Amount %= 10000;
	printf("5000Won:    %d\n", Amount / 5000);
	Amount %= 5000;
	printf("1000Won:    %d\n", Amount / 1000);
	Amount %= 1000;
	printf("500Won:     %d\n", Amount / 500);
	Amount %= 500;
	printf("100Won:     %d\n", Amount / 100);
	Amount %= 100;
	printf("50Won:      %d\n", Amount / 50);
	Amount %= 50;
	printf("10Won:      %d\n", Amount / 10);
	Amount %= 10;

	return 0;
}