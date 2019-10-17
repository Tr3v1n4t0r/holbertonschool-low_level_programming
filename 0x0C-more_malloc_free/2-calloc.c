#include "holberton.h"
#include <stdlib.h>

/**
 *_memset - Fill n bytes of memory with a constant byte
 *
 *@s: memory
 *@b: constant byte
 *@n: number of bytes to fill
 *
 *Return: pointer to memory area s
 */
char *_memset(char *s, const char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}

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

	_memset(p, 0, nmemb * size);	
	return (p);
}
