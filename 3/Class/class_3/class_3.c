//Conditional Compliation (Preview)
#define DEBUG        //Define a flag 위 창에 있는 debug/release 설정
#define TARFET_STM32 // To connect with Micro controller

#ifdef DEBUG         //if setting is DEBUG
#endif

#ifdef TARGET_STM32  //STM32-specific initialization code
#else                //Feneric platform code
#endif

#ifndef MAX_SIZE     //If MAX_SIZE is NOT defined...
#define MAX_SIZE 100 //... define with default value
#endif

//in embedded system: controls debug output, platform selection, default configs

#include <stdio.h>
int main(void)
{
	int x = 1;
	
	printf("x = %d\n", x); //Only compiled in debug mode
	
	return 0;
}