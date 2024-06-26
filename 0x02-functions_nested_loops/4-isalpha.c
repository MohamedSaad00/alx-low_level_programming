#include "main.h"
/*
 * this will write a function that checks for alphabetic character
 * return 1 if c is lowercase
 * return 0 otherwise
 */
int _isalpha(int c)
{
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return 1;
	else
		return 0;
}
