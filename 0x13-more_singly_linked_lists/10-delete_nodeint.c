#include "lists.h"

/**
 *delete_nodeint_at_index - inserts a node at a specific spot
 *
 *@head: start of list
 *@index: spot to place node
 *
 *Return: address of node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *spot = *head;

	if (!head || !(*head))
		return (-1);

	for (i = 1; i < index; i++)
	{
		if (spot->next)
			spot = spot->next;
		else
			return (-1);
	}

	if (index == 0)
	{
		new = spot;
		*head = spot->next;
	}

	else
		new = spot->next;

	spot->next = new->next;

	free(new);

	return (1);
}
