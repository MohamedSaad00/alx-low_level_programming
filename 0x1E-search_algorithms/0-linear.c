#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: first index where value is located, or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;  /* Change int to size_t */

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++) /* No need to cast size */
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]); /* Use %lu for size_t */
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
