#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
long number = 612852475143;
int c;
while (c++ < number / 2)
{
if (number % c == 0)
{
number /= 2;
continue;
}

for (c = 3; c < number / 2; c += 2)
{
if (number % c == 0)
number /= c;

}
}
printf("%ld\n", number);
return (0);
}
