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

	while (n > 0)
	{
		*tmp = b;
		tmp++;
		n--;
	}
	return (s);
}
