#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - Prints a buffer
 * @b: The buffer to print
 * @size: The size of the buffer
 */
void print_buffer(char *b, int size)
{
    int offset, byte_index;

    if (size <= 0)
    {
        printf("\n");
        return;
    }

    for (offset = 0; offset < size; offset += 10)
    {
        printf("%08x: ", offset);

        for (byte_index = 0; byte_index < 10; byte_index++)
        {
            if ((offset + byte_index) < size)
                printf("%02x", *(b + offset + byte_index));
            else
                printf("  ");

            if (byte_index % 2)
                printf(" ");
        }

        for (byte_index = 0; byte_index < 10; byte_index++)
        {
            if ((offset + byte_index) < size)
            {
                if (isprint(*(b + offset + byte_index)))
                    printf("%c", *(b + offset + byte_index));
                else
                    printf(".");
            }
        }
        printf("\n");
    }
}
