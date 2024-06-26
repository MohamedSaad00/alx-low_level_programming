#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int n, c, result;
for (n = 0; n <= 9; n++)
{
_putchar('0');

for (c = 1; c <= 9; c++)
{
_putchar(',');
_putchar(' ');
result = n * c;
if (result < 10)
_putchar(' ');
else
_putchar((result / 10) + '0');

_putchar((result % 10) + '0');
}
_putchar('\n');
}
}
