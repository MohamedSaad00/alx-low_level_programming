#include "main.h"
/**
*print_triangle - prints a triangle
*@size:size parameter of triangle
*Return:returns nothing
*/
void print_triangle(int size)
{
int a, c;

if (size > 0)
{
for (a = 1; a <= size; a++)
{
for ((c = size - a); c > 0; c--)
_putchar(' ');

for (c = 0; c < a; c++)
_putchar('#');

if (a == size)
continue;

_putchar('\n');
}
}
_putchar('\n');
}
