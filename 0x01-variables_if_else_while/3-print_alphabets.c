#include <stdio.h>

/**
 * main - Program to print the alphabet in lowercase, and then in uppercase
 *
 * Description: This program prints the lowercase alphabet letters from 'a' to 'z'
 * followed by uppercase alphabet letters from 'A' to 'Z', followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
