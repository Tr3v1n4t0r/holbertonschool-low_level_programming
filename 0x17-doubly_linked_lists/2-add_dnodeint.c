#include "lists.h"

/**
 * add_dnodeint - Adds new node at the beginning of a list
 *
 * @head: Head of the list
 * @n: Value
 *
 * Return: The address of the new node, or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
