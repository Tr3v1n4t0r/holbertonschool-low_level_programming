#include "holberton.h"

/**
 *rot13 - encodes with rot13
 *
 *@s: pointer
 *
 *Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char start[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotate[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; start[j]; j++)
		{
			if (s[i] == start[j])
			{
				s[i] = rotate[j];
				break;
			}
		}
	}
	return (s);
}
