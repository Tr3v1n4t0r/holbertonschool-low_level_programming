#include "holberton.h"

/**
 *_strlen - returns the length of a string
 *
 *@s: int
 *
 *Return: 0
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
