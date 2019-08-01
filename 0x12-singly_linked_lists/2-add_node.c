#include "lists.h"
#include <string.h>

/**
 *add_node - adds a node to the beginning of the list
 *
 *@head: start of list
 *@str: string
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	if (!head || !str)
		return (0);

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
	new->next = *head;
	*head = new;

	return (new);
}
