#include "main.h"
/**
*swap_int - swap two integers
*@a: first integer
*@b: second integer
*Return: nothing
*/
void swap_int(int *a, int *b)
{
	int num = *a;
	 *a = *b;
	 *b = num;
}
