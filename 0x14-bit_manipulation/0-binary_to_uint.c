#include "holberton.h"

/**
 * _strlen - Return the length of a string
 * @s: The string to check
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;

	return (i);
}

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string to convert
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0, base = 1;
	int len, i;

	if (!b)
		return (0);

	len = _strlen(b);

	for (i = 0; i < len; i++)
		if (b[i] != '0' && b[i] != '1')
			return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			n += base;
		base *= 2;
	}

	return (n);
}
