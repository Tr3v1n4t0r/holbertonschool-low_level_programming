#include "holberton.h"
#include <stdlib.h>

/**
 *_calloc - allocates memory for an integer using malloc
 *
 *@nmemb: elements
 *@size: number of bytes
 *
 *Return: void pointer or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	return (p);
}
