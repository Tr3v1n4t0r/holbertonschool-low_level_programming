#include "holberton.h"

/**
 *leet - converts to 1337 code
 *
 *@s: pointer
 *
 *Return: char
 */
char *leet(char *s)
{
	int i, j;
	char numbers[] = "4, 3, 0, 7, 1";
	char upper[] = "A, E, O, T, L";
	char lower[] = "a, e, o, t, l";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; upper[j]; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}
	return (s);
}
