#include "lists.h"

/**
 *sum_listint - adds the sum of all data from a list
 *
 *@head: start of list
 *
 *Return: sum or 0
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;
	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
