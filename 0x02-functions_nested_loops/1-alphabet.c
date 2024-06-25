#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 *
 * Description: This function uses a loop to print each letter of the alphabet
 * in lowercase, followed by a new line. The function only uses _putchar twice.
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar (alphabet);
	}
	_putchar('\n');
}
