#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list
 *
 * @h: Head of list
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
        size_t count = 0;

        while (h)
        {
                printf("%d\n", h->n);
                count++;
                h = h->next;
        }
        return (count);
}
