#include "holberton.h"

/**
 *puts2 - prints every other char
 *
 *@str - string
 *
 *Return: 0
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);
		str++;
		str++;
	}
	_putchar ('\n');
}