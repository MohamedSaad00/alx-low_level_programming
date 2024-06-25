#include "main.h"

/**
 * main
 * 
 * prints the alphabet, in lowercase, followed by a new line.
 * 
 * Return: No return
 */
void print_alphabet(void)
{
	int alphabet;
	for (alphabet= 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar (alphabet);
	}
	_putchar('\n');
}
