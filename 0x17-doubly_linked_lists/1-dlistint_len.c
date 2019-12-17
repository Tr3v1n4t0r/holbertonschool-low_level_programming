#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 *
 * @h: The list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
