#include <stdio.h>
/**
 * main - Program to print the alphabet letters followed by a new line
 * Description: This program prints the lowercase alphabet letters
 * from 'a' to 'z' followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
