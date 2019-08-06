#include "lists.h"

/**
 *pop_listint - frees a list
 *
 *@head: start of list
 *
 *Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !(*head))
		return (0);

	n = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (n);
}
