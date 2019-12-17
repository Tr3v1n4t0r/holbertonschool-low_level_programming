#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a linked list
 *
 * @head: Head of list
 * @index: The index of node
 *
 * Return: The nth node, or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	return (head);
}
