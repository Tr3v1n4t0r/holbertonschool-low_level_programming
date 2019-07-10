#include "holberton.h"

/**
 *_strspn - gets the length of a string
 *
 *@s: string
 *@accent: string
 *
 *Return: length of string
 */
unsigned int _strspn(char *s, char *accent)
{
	int i, k, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (count != i)
			break;
		for (k = 0; s[k] != '\0'; k++)
		{
			if (s[i] == accent[k])
				count++;
		}
	}
	return (count);
}
