#include "lists.h"

/**
 * sum_dlistint - Return the sum of all the data (n) in a list
 *
 * @head: Head of list
 *
 * Return: The sum of the data (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
