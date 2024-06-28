#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns nothing
*/
void print_square(int size)
{
int a, c;
if (size > 0)
{
for (a = 0; a < size; a++)
{
for (c = 0; c < (size - 1); c++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
