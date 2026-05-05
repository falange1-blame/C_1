//compare
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[50];
	printf("Enter a word: ");
	scanf("%s", s);
	
	/* strcmp returns 0 if equal */
	if (strcmp(s, "quit") == 0)
	{
		printf("Quitting...\n");
		return 0;
	}

	/* strstr: does it contain "hello"? */
	if (strstr(s, "hello") != NULL)
		printf("Found 'hello' in string\n");
  
	/* Palindrome check */
	char rev[50];
	int i, len = strlen(s);
	for (i = 0; i < len; i++)
		rev[i] = s[len - 1 - i]; //len == '\0'이므로

	rev[len] = '\0';
	if (strcmp(s, rev) == 0)
		printf("%s is a palindrome\n", s);
	return 0;
}