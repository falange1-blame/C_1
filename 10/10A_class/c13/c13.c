// Pointer Pattern Two - Pointer Technique
#include <stdio.h>
/* Check if string is a palindrome using two pointers */

int is_palindrome(const char *s) // 포인터를 사용하여 주소값의 값을 만짐.
{
	const char *left = s; // &s[0]과 같다.
	const char *right = s; //  &s[0]과 같다.
     
	while (*right) right++;  /* find end */
	right--;                 /* last char 문자열의 마지막은 '\0'이므로*/
	while (left < right) //palindrome을 위하여
	{
		if (*left != *right) return 0;  /* mismatch */
		left++; //좌측은 오른쪽으로 한 칸씩 가며 검증(주소)
		right--; //우측은 좌측으로 한 칸씩 가며 검증(주소)
	}
	return 1; //모든 주소값의 값을 검증 했을 때 이상 없으면 1반환
}

/* Remove duplicates from sorted array (in-place) */
int remove_dups(int *arr, int n)
{
    if (n == 0) return 0;
    int *write = arr; // *write = &arr[0]
    const int *read = arr + 1; // *read = &arr[1]
    while (read < arr + n) // read의 주소값이 arr[n]보다 같거나 크다면 중단
    {
        if (*read != *write) *++write = *read; // read의 주소의 값과 write의 주소의 값이 다르다면
        //*(write++) 처럼 사용됨 
        read++; //read의 주소 1칸 +로 옮기기
    }
    return (int)(write - arr + 1);
}

int main(void) //함수에 호출 및 출력 역할
{
    int num[] = {1, 1, 2, 2, 3, 3, 4, 4};
    printf("racecar: %d\n", is_palindrome("racecar"));  /* 1 */
    printf("hello:   %d\n", is_palindrome("hello"));    /* 0 */
    printf("No duplicate sort   %d\n", remove_dups(num, 8));    /* 0 */
    return 0;
}
