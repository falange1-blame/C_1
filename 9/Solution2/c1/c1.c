//a,b,c string의 길이를 출력
#include <stdio.h>

/* Compute length of a string by walking until '\0' */

int my_strlen(char s[])
{
	int n = 0;
	while (s[n] != '\0')   /* keep going until null terminator */
		n++;
	return n;
}

int main(void)
{
	char a[] = "Hello";
	char b[] = "";


/* H,e,l,l,o,\0  → length 5 */
/* B just \0 in 0 idx */

char c[] = "C Programming";  /* length 13 */

printf("len(\"%s\") = %d\n", a, my_strlen(a)); // "Hello" = 5
printf("len(\"%s\") = %d\n", b, my_strlen(b)); // "" = 0
printf("len(\"%s\") = %d\n", c, my_strlen(c)); // "C Programming" = 13

return 0;
}