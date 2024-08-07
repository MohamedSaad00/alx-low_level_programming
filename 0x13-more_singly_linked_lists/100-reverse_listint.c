#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current != NULL)
    {
        next = current->next;   /* Save the next node */
        current->next = prev;   /* Reverse the link */
        prev = current;         /* Move prev to current */
        current = next;         /* Move current to next node */
    }

    *head = prev;  /* Update head to the new first node */
    return *head;
}
