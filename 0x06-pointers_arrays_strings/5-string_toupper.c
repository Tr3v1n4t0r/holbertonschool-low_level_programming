#include "holberton.h"

/**
 *string-toupper - changes all lowercase letters to uppercase
 *
 *@s: pointer
 *
 *Return: char
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] = s[i] - 32;
	}
	return (s);
}
