#include "holberton.h"

/**
 *_memset - fills memory with a constant byte
 *
 *@s: char
 *@b: char
 *@n: unsigned int
 *
 *Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;

	for (b = 0; (unsigned int) b < n ; b++)
		*s++ = 0x01;
	for (; (unsigned int) b < n; b++)
		*s =  '\0';
	return (tmp);
}
