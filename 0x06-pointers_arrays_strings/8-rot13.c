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
	char start[] = "a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s,
t, u, v, w, x, y, z";
	char rotate[] = "n, o, p, q, r, s, t, u, v, w, x, y, z, a, b, c, d, e, f,
g, h, i, j, k, l, m";

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
