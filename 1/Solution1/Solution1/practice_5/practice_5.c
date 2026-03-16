/*FIx the bug
#include <stdio.h>

int main(void)
{
Printf("Hello World\n")
return 0
}
*/
#include <stdio.h>

int main(void)
{
	printf("Hello World\n");//P -> p, add ; at the end (syntax error)
    return 0; //add ; (syntax error)
}