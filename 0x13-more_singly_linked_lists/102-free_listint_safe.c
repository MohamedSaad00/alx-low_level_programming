#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Double pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current;
    listint_t *next;

    if (h == NULL || *h == NULL)
        return (0);

    while (*h != NULL)
    {
        if (*h <= (*h)->next)
        {
            free(*h);
            count++;
            break;
        }

        current = *h;
        next = (*h)->next;
        free(current);
        *h = next;
        count++;
    }

    *h = NULL;

    return (count);
}
