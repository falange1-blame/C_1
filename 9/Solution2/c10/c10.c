/* strtok(string, delimiter) : returns each piece one at a time  */
/* strtok(NULL,   delimiter) : call with NULL to get the next piece */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char line[] = "apple,banana,grape,peach";
	char* tok;            /* char* will be explained in Week 9 */

	tok = strtok(line, ",");   /* first call: pass the string */

	while (tok != NULL)
	{
		printf("%s\n", tok);
		tok = strtok(NULL, ","); /* next calls: pass NULL , Null 다음 '0'을 \0로 만들어줘*/ 
	}
	return 0;
}
/* Output:  apple
banana
grape
peach   */