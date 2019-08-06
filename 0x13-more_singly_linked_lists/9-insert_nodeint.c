#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a node at a specific spot
 *
 *@head: start of list
 *@idx: spot to place node
 *@n: int in new node
 *
 *Return: address of node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new;
	listint_t *spot = *head;

	if (!head)
		return (NULL);

	for (i = 1; i < idx; i++)
	{
		if (spot)
			spot = spot->next;
		else
			return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else if (spot)
	{
		new->next = spot->next;
		spot->next = new;
	}

	return (new);
}
