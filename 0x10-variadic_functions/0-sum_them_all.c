#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: The number of parameters 
*passed to the function.
*
*Return: The sum of all parameters.
*If n is 0, return 0. 
*/

int sum_them_all(const unsigned int n, ...)
{

va_list li;
int sum = 0;
unsigned int i;

	if (n == 0)
	return (0);

	va_start(li, n);

	for (i = 0; i < n; i++)
	sum += va_arg(li, int);

	va_end(li);
	return sum;
}
