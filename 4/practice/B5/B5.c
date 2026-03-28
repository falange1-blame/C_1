//Simple XOR Encryption
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char A;
	char B;
	char C;
	int key;

	printf("Type 3 chars with space: ");
	scanf(" %c %c %c", &A, &B, &C);

	printf("Type Key Integer: ");
	scanf("%d", &key);

	printf("Original: %c %c %c\n", A, B, C);
	printf("Encrypted: %d(%#X) %d(%#X) %d(%#X)\n", A ^ key, A ^ key, B ^ key, B ^ key, C ^ key, C ^ key);
	printf("Decrypted: %c %c %c\n", A ^ key ^ key, B ^ key ^ key, C ^ key ^ key);
	
	printf("Match: ");
	if (A == A ^ key) printf("YES\n");
	else printf("NO\n");

	return 0;
}