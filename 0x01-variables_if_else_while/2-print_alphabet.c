#include <stdio.h>

/**
 * main - Program to print alphabet letter followed by new line
 *
 * Return: return 0
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
