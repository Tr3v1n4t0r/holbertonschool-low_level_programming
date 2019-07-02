#include "holberton.h"

/**
 *rev_string - prints a string in reverse
 *
 *@s: string
 *
 *Return: 0
 */
void rev_string(char *s)
{
	int count;
	char *z = s;
	char temp;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;

	count = count / 2;

	while (count > 0)
	{
		temp = *z;
		*z = *s;
		*s = temp;

		count--;
		z++;
		s--;
	}
}
