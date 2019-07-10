#include "holberton.h"

/**
 *_memcpy - copies memory area
 *
 *@dest: destination
 *@src: source
 *@n: unsigned int
 *
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n--)
		*tmp++ = *src++;
	return (dest);
}
