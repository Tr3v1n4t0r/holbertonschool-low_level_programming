#include "holberton.h"
#include <stdlib.h>

/**
 *array_range - creates an array of integers
 *
 *@min: int
 *@max: int
 *
 *Return: integer pointer or NULL
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (1 + max - min));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
