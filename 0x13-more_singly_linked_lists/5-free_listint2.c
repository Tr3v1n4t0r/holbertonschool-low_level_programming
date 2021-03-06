#include "lists.h"

/**
 *free_listint2 - frees a list
 *
 *@head: start of list
 *
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
