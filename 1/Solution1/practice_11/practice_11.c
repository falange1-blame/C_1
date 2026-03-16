/*
Fix the Bugs
#include <stdio.h>

int main(void)
{
    int score = 95

    printf("Score %f\n", score);
    Printf("Passed!\n", score);
    return 0;
}
*/
#include <stdio.h>

int main(void)
{
    int score = 95; //add ;

    printf("Score %d\n", score); //%f -> %d
    printf("Passed!\n", score); //Printf -> printf,
    return 0;
}