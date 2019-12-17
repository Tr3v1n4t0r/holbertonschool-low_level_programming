#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert node at a given position
 *
 * @h: The head of the list
 * @idx: Index
 * @n: Value of node
 *
 * Return: The address of the new node, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h;
	dlistint_t *new;
	unsigned int i;

	if (!h)
		return (NULL);
	if (*h == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h)
			temp->prev = new;
		*h = new;
		new->prev = NULL;
		new->next = temp;
		return (new);
	}
	for (i = 1; i < idx; i++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->prev = temp;
	new->next = temp->next;
	if (temp->next)
		temp->next->prev = new;
	temp->next = new;
	return (new);
}
