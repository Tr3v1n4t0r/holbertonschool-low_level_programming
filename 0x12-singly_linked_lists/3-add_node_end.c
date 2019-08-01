#include "lists.h"
#include <string.h>

/**
 *add_node_end - adds a new node at the end of a list
 *
 *@head: start of list
 *@str: string
 *
 *Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	int i;

	if (!head || !str)
		return (NULL);

	last = *head;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;

	new->len = i;
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
		last = last->next;
	last->next = new;

	return (new);
}
