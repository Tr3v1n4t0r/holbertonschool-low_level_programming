#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a listint_t linked list
 *
 * @head: start oflist
 * @index: nth node
 *
 * Return: The nth node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);

	for (; i < index; i++)
	{
		if (head->next)
			head = head->next;

		else
			return (NULL);
	}

	return (head);
}
