#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node at the specified index
 *
 * @head: Head of list
 * @index: Index
 *
 * Return: 1 if successful, else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i;

	if (!head || !(*head))
		return (-1);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}

	if (index == 0)
	{
		if (temp->next)
			temp->next->prev = NULL;
		*head = temp->next;
	}
	else
	{
		if (temp->next)
			temp->next->prev = temp->prev;
		if (temp->prev)
			temp->prev->next = temp->next;
	}

	free(temp);
	return (1);
}
