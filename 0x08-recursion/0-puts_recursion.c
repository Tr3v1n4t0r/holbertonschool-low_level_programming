#include "holberton.h"

/**
 *_puts_recursion - prints a string
 *
 *@s: string
 *
 *Return: 0
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');
}
