// Payment Receipt Calculator
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double p1;
	double p2;
	double p3;
	double A1;
	double A2;
	double A3;
	double Sub;
	double TAX;

	int qty1;
	int qty2;
	int qty3;

	printf("Type price and quantity of Item 1: ");
	scanf("%lf %d", &p1, &qty1);

	printf("Type price and quantity of Item 2: ");
	scanf("%lf %d", &p2, &qty2);

	printf("Type price and quantity of Item 3: ");
	scanf("%lf %d", &p3, &qty3);

	A1 = p1 * qty1;
	A2 = p2 * qty2;
	A3 = p3 * qty3;
	Sub = A1 + A2 + A3;
	TAX = (Sub) * 0.1;

	printf("============RECEIPT============\n");
	printf("%-12s %3s %8s %8s\n", "Item", "Qty", "Price", "Amount");
	printf("-------------------------------------\n");
	printf("%-12s %3d %8.2lf %8.2lf\n", "Item 1", qty1, p1, A1);
	printf("%-12s %3d %8.2lf %8.2lf\n", "Item 2", qty2, p2, A2);
	printf("%-12s %3d %8.2lf %8.2lf\n", "Item 3", qty3, p3, A3);
	printf("-------------------------------------\n");
	printf("%-12s %18.2lf\n", "Subtotal:", Sub);
	printf("%-12s %18.2lf\n", "Tax (10%):", TAX);
	printf("-------------------------------------\n");
	printf("%-12s %18.2lf\n", "TOTAL:", Sub + TAX);
	printf("=====================================\n");

	return 0;
}

/* T.A. Solution
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	
}

*/