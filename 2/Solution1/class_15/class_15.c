//User-Defined Types (사용자 정의 자료형)
/*
struct(구조체) -group different types together
union (공용체) -members share the same memory
enum  (열거형) -named integer types
typedef        -alias(별명) for existing types

-> Improves code readability
-> Enables complex data structure modeling
-> Essential for real-world C programming
*/
#include <stdio.h>
#include <string.h> //for strcpy

int main(void)
{
	struct Student {
		int id; char name[20]; double gpa;
	}; //Student 구조체 안에 dexlare variable data

	struct Student s1; //declare variable s1 of structure Student, group different types together ->32bytes
	s1.id = 202201900; strcpy_s(s1.name, sizeof(s1.name), "Yang"); s1.gpa = 3.85;

	printf("id:     %d\n", s1.id);
	printf("name:   %s\n", s1.name);
	printf("gpa:    %.2f\n", s1.gpa);

	return 0;
}
