#include "holberton.h"

/**
 *puts2 - prints every other char
 *
 *@str: string
 *
 *Return: 0
 */
void puts2(char *str)
{
	int x;

	for (x = 0 ; x < _strlen(str) ; x += 2)
	{
		_putchar (str[x]);
	}
	_putchar ('\n');
}

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
