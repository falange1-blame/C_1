//strcpy vs strncpy Buffer Overflow in strcpy
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char dst1[6];
	char dst[6];                         /* room for 5 chars + '\0' */
	char src[] = "Hello, World";        /* 12 chars + '\0' */
	
	/* strcpy: copies until '\0' — overflows dst! */
	strcpy(dst, src);  //→  WRITES PAST END OF dst — undefined behavior */
	dst1[sizeof(dst1) - 1];
	/* strncpy: copy at most n bytes — bounded */
	strncpy(dst, src, sizeof(dst) - 1); //dst 마지막 자리는 '\0'이어야 하니까
	dst[sizeof(dst) - 1] = '\0';        /* always null-terminate manually */
	
	printf("dst = \"%s\"\n", dst1);
	printf("dst = \"%s\"\n", dst);     /* "Hello" */
	printf("len = %lu\n", strlen(dst));
	return 0;
}

/* Lesson: never trust input length — always bound your copies.
Buffer overflows are the source of countless real CVEs.   */