#include "lists.h"

/**
 * free_dlistint - Free list
 *
 * @head: Head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
