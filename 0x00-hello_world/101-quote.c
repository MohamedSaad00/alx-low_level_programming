#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
#include <unistd.h>
int main(void)
{
char part1[] = "and that piece of art is useful\" - Dora Korpar, ";
char part2[] = "2015-10-19\n";
write(2, part1, sizeof(part1) - 1);
write(2, part2, sizeof(part2) - 1);
return (1);
}
