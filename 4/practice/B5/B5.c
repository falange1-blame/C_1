//Simple XOR Encryption
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char A;
	char B;
	char C;
	int key;

	printf("Type 3 char with space: ");
	scanf(" %c %c %c", &A, &B, &C);

	printf("Type Key Integer: ");
	scanf("%d", &key);

	printf("Original: %c %c %c\n", A, B, C);
	printf("Encrypted: %d(%#X) %d(%#X) %d(%#X)\n", A ^ key, A ^ key, B ^ key, B ^ key, C ^ key, C ^ key);
	printf("Decrypted: %c %c %c\n", A ^ key ^ key, B ^ key ^ key, C ^ key ^ key);
	
	printf("Match with Original & Decrypted: ");
	if (A == (A ^ key ^ key))
	{
		printf("YES\n");
	}
	else printf("NO\n");

	printf("Match with Original & Encrypted: ");
	if (A == (A ^ key))
	{
		printf("YES\n");
	}
	else printf("NO\n");

	return 0;
}

/*
#define_CER_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char A;
	char B;
	char C;
	int key;
	int EA = A ^ key;
	int EB = B ^ key;
	int EC = C ^ key;
	int DA = A ^ key ^ key;
	int DB = B ^ key ^ key;
	int DC = C ^ key ^ key;

	printf("Type 3 char with space:  ");
	scanf("%c %c %c", &A, &B, &C);

	printf("Type Key Integer");
	scanf("%d", &key);

	printf("Original: %c %c %c\n", A, B, C);
	printf("Encrypted: %d(%#X) %d(%#X) %d(%#X)\n", EA, EB, EC);
	printf("Decrypted: %d(%#X) %d(%#X) %d(%#X)\n", DA, DB, DC);

	return 0;
*/

/* T.A. Solution
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c1; c2; c3;
	scanf("%c")

	int key;
	scanf();

	//암호화
	char e1 = c1 ^ key;
	char e2 = c2 ^ key;
	char e3 = c3 ^ key;

	printf("Encrypted: %3d(0x%02X)", (unsigned char)e1, );

	//복호화
	char d1 = e1 ^ key;
	printf("%c %c %c\n", d1, d2 d3);

	//확인
	printf("Match", (d1 == c1) ? Yes : No);

	return 0;
}

*/